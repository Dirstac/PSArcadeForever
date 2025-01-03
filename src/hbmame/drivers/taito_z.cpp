// license:BSD-3-Clause
// copyright-holders:Robbbert
#include "../mame/drivers/taito_z.cpp"


ROM_START( contcirc01 )
	ROM_REGION( 0x40000, "maincpu", 0 )
	ROM_LOAD16_BYTE( "b33-ww.ic25", 0x00000, 0x20000, CRC(f5c92e42) SHA1(42dfa1895e601df76d7022b83f05c4e5c843fd12) )
	ROM_LOAD16_BYTE( "b33-xx.ic26", 0x00001, 0x20000, CRC(e7c1d1fa) SHA1(75e851629a54facb8804ee8a953ab3265633bbf4) )

	ROM_REGION( 0x40000, "sub", 0 )
	ROM_LOAD16_BYTE( "b33-yy.ic35", 0x00000, 0x20000, CRC(16522f2d) SHA1(1d2823d61518936d342df3ed712da5bdfdf6e55a) )
	ROM_LOAD16_BYTE( "cc_36.ja",    0x00001, 0x20000, CRC(4f7d4f89) SHA1(3d51b477dde162c567efc51bbc2a0ee58cb07b0c) )

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "b33-30.11", 0x00000, 0x10000, CRC(d8746234) SHA1(39132eedfe2ff4e3133f8020304da0d04dd757db) )

	ROM_REGION( 0x80000, "tc0100scn", 0 )
	ROM_LOAD16_WORD_SWAP( "b33-02.57", 0x00000, 0x80000, CRC(f6fb3ba2) SHA1(19b7c4cf33c4737405ebe53e7342578454e6ef95) )

	ROM_REGION( 0x200000, "sprites", 0 )
	ROM_LOAD64_WORD_SWAP( "b33-06", 0x000000, 0x080000, CRC(2cb40599) SHA1(48b269610f80a42608f563742e5266dcf11638d1) )
	ROM_LOAD64_WORD_SWAP( "b33-05", 0x000002, 0x080000, CRC(bddf9eea) SHA1(284f4ba3dc107b4e26424963d8206c5ec4882983) )
	ROM_LOAD64_WORD_SWAP( "b33-04", 0x000004, 0x080000, CRC(8df866a2) SHA1(6b87d8e683fe7d31070b16620ebfee4edf7711b8) )
	ROM_LOAD64_WORD_SWAP( "b33-03", 0x000006, 0x080000, CRC(4f6c36d9) SHA1(18b15a991c3daf22b7f3f144edf3bd2abb3917eb) )

	ROM_REGION16_LE( 0x80000, "tc0150rod", 0 )
	ROM_LOAD16_WORD( "b33-01.3", 0x00000, 0x80000, CRC(f11f2be8) SHA1(72ae08dc5bf5f6901fbb52d3b1dabcba90929b38) )

	ROM_REGION16_LE( 0x80000, "spritemap", 0 )
	ROM_LOAD16_WORD( "b33-07.64", 0x00000, 0x80000, CRC(151e1f52) SHA1(118c673d74f27c4e76b321cc0e84f166d9f0d412) )

	ROM_REGION( 0x100000, "ymsnd:adpcma", 0 )
	ROM_LOAD( "b33-09.18", 0x00000, 0x80000, CRC(1e6724b5) SHA1(48bb96b648605a9ceb88ff3b175a87226583c3d6) )
	ROM_LOAD( "b33-10.17", 0x80000, 0x80000, CRC(e9ce03ab) SHA1(17324e8f0422118bc0912eba5750d80469f40b78) )

	ROM_REGION( 0x80000, "ymsnd:adpcmb", 0 )
	ROM_LOAD( "b33-08.19", 0x00000, 0x80000, CRC(caa1c4c8) SHA1(15ef4f36e56fab793d2249252c456677ca6a85c9) )

	ROM_REGION( 0x10000, "user2", 0 )
	ROM_LOAD_OPTIONAL( "b14-30.97",   0x00000, 0x10000, CRC(dccb0c7f) SHA1(42f0af72f559133b74912a4478e1323062be4b77) )
	ROM_LOAD_OPTIONAL( "b14-31.50",   0x00000, 0x02000, CRC(5c6b013d) SHA1(6d02d4560076213b6fb6fe856143bb533090603e) )
	ROM_LOAD_OPTIONAL( "b33-17.16",   0x00000, 0x00100, CRC(7b7d8ff4) SHA1(18842ed8160739cd2e2ccc2db605153dbed6cc0a) )
	ROM_LOAD_OPTIONAL( "b33-18.17",   0x00000, 0x00100, CRC(fbf81f30) SHA1(c868452c334792345dcced075f6df69cff9e31ca) )
ROM_END


GAMEL(1987, contcirc01, contcirc, contcirc, contcrcj, contcirc_state, empty_init, ROT0, "Taito Corporation", "Continental Circus (Japan set 2)", MACHINE_SUPPORTS_SAVE, layout_contcirc )

