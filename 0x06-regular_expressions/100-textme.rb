#!/usr/bin/env ruby
f = ARGV[0].scan(/from:(.\w+)|to:(.\w+)|flags:([0-9:-]+)/)
puts [f[0].compact, f[1].compact, f[2].compact].join(",")
