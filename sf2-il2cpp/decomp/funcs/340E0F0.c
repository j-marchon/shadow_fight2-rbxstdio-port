// MGNPHCAAEIO$$KANEDKDJCOE @ RVA 0x340E0F0

void MGNPHCAAEIO__KANEDKDJCOE(int32_t CJNHFNHJHPE,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_0456805f & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456805f = 1;
  }
                    /* try { // try from 0350e12c to 0360e13b has its CatchHandler @ 0350e13c */
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0350e0cc with catch @ 0350e13c
                       catch() { ... } // from try @ 0350e12c with catch @ 0350e13c */
                    /* try { // try from 0350e140 to 0360e143 has its CatchHandler @ 0350e14c */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0350e144 to 0360e14f has its CatchHandler @ 0350dfc4 */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0350e140 with catch @ 0350e14c
                        */
  (MGNPHCAAEIO_TypeInfo->static_fields->HLNIJGJDDEE).fields = CVar1;
  return;
}

