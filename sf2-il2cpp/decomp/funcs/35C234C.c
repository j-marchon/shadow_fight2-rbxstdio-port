// FFKCANJCNJM$$MAHFCKJGBPP @ RVA 0x35C234C

void FFKCANJCNJM__MAHFCKJGBPP(FFKCANJCNJM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Map_MapScene_o *__this_00;
  
                    /* catch() { ... } // from try @ 036c20c4 with catch @ 036c234c */
                    /* catch() { ... } // from try @ 036c22c4 with catch @ 036c2350 */
                    /* catch() { ... } // from try @ 036c20a8 with catch @ 036c2354 */
                    /* try { // try from 036c236c to 037c236f has its CatchHandler @ 036c2390 */
                    /* try { // try from 036c2370 to 037c2397 has its CatchHandler @ 036c1f98 */
  if ((DAT_04568f3b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
                    /* catch() { ... } // from try @ 036c236c with catch @ 036c2390 */
    DAT_04568f3b = 1;
  }
                    /* try { // try from 036c2398 to 037c239f has its CatchHandler @ 036c23b4 */
                    /* try { // try from 036c23a0 to 037c23ab has its CatchHandler @ 036c1f98 */
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
                    /* try { // try from 036c23ac to 037c23b3 has its CatchHandler @ 036c23b4 */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 036c2398 with catch @ 036c23b4
                       catch() { ... } // from try @ 036c23ac with catch @ 036c23b4 */
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Map_MapScene__GotoZoneByName
              (__this_00,(__this->fields).DEKCPPOJFEH,(__this->fields).GCHDBFJPGFJ,(MethodInfo *)0x0
              );
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

