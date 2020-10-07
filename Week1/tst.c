const std = @import("std");

pub fn main() !void {
    const in = std.io.getStdIn().inStream();
    const out = std.io.getStdOut().outStream();

    var buf: [1000]u8 = undefined;

    // `try` will propagate error, if any, upwards
    // `orelse` will cause the optional `?[]u8` result to be unwrapped to LHS if it has a value,
    // otherwise if "null" (no data EOF) we bail with an error message
    // should probably send error to stderr but not worried about that right now
    const line = (try in.readUntilDelimiterOrEof(&buf, '\n')) orelse {
        try out.print("failed to read line\n", .{});
        return;
    };

    // let's create an array of `[]const u8` (strings)
    // note `[_]` means infer the size of array to be 2 in this case
    // `[2][]const u8` could also have been used
    const names = [_][]const u8{
        "Alice",
        "Bob",
    };

    // let's return a value from a block
    // `greet` can infer it is bool but we just are explicit about type for clarity
    const greet: bool = result: {
        for (names) |name| {
            if (std.mem.eql(u8, name, line)) break :result true;
        }
        break :result false;
    };

    if (greet) {
        try out.print("Hello, {}!\n", .{line});
    } else {
        try out.print("don't know you, {}!\n", .{line});
    }
}