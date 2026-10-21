// OLAKAAKGDBA$$HCNOCNBEDDE @ RVA 0x32B5064

void OLAKAAKGDBA__HCNOCNBEDDE
               (System_String_o *OCMMDIHLKMH,System_String_o *CCKJFMILHLC,MethodInfo *method)

{
                    /* try { // try from 033b5070 to 034b5077 has its CatchHandler @ 033b508c */
                    /* try { // try from 033b5078 to 034b5083 has its CatchHandler @ 033b4e80 */
                    /* try { // try from 033b5084 to 034b508b has its CatchHandler @ 033b508c */
  if ((DAT_04567447 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b5008 with catch @ 033b508c
                       catch(type#2 @ 00000000) { ... } // from try @ 033b5070 with catch @ 033b508c
                       catch(type#2 @ 00000000) { ... } // from try @ 033b5084 with catch @ 033b508c
                        */
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_04567447 = 1;
  }
  NEHNBJKKABI__GPNPELOHJCJ(CCKJFMILHLC,OCMMDIHLKMH,(MethodInfo *)0x0);
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CFJANHACGMG__GCBGEBGFNHI(CCKJFMILHLC,false,(MethodInfo *)0x0);
  return;
}

