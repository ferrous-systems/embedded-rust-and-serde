# Embedded Rust and Serde: A Love Story

Or: Writing safe and efficient communication protocols with Embedded Rust

* Who am I, and what do I do
* Making devices talk together: A deceptively difficult
* What are the problems?
    * Dissimilar devices
    * Packed Structures
    * Alignment
    * Performance
    * Code Size
    * Security and Memory Safety
* Why not:
    * Packed structures and shared headers?
    * JSON?
    * Tools like Protobuf/NanoPB
* In general: things work until they don't
    * Lots of odd edge cases
    * Brittle to changing details of how messaging works
* What is Rust?
    * Explanation of Rust
    * Explanation of Rust's support for Embedded
* What is Serde?
    * Utility in Rust for serializing and deserializing data
    * Split between a standard "frontend", and customizable "backends"
    * Enables the generation of code necessary to efficiently and safely SerDe data structures
    * Compatible with `no_std`/bare metal Rust, when used with compatible backends
* Okay, but I don't use Rust!
    * Not a problem!
    * Explanation of Rust's FFI story
    * How to pragmatically integrate with existing projects
    * Good use case to try Rust before starting major projects!
* Show me the data!
    * Performance graphs from Packed Structures/Serde/NanoPB
* (IF I CAN GET CLIENT RELEASE):
    * Interesting project that makes it easier to use Serde in non-Rust projects
* Summary and Questions


## Thoughts about pacing

Timing:

* Introduction and problem statement (5m)
* Cursed things in C Structs (5m)
    * Ints
    * Structs
    * Enums
    * Packed Structures
    * Quick Summary (why we care, perf + portability)
* What is Rust (5m)
    * Short timeline
    * Tech info
    * Why it's relevant to embedded
* What is Serde (5m)
    * Serialization Framework for Rust
    * Built on Rust's trait abstractions
    * Split into two distinct components, frontend and backend
    * Frontend: knows the data
    * Backend: knows the format
    * If your data is made out of types that fit the [serde data model](https://serde.rs/data-model.html)
* Rust and CFFI (5m)
    * Rust can be used to generate C static/dynamic libraries
    * These libraries can be integrated into your build system
* Summary, Results (5m)
