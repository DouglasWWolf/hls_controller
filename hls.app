<project xmlns="com.autoesl.autopilot.project" name="hls_controller" top="controller">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../testbench.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="hls_controller/uart.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="hls_controller/test.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="hls_controller/controller.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="hls_controller/axi4lite.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

