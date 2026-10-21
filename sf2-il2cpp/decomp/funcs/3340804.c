// AFFHKININGD$$LFCMDLKDGHG @ RVA 0x3340804

void AFFHKININGD__LFCMDLKDGHG(AFFHKININGD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  long lVar3;
  Nekki_SF2_GUI_Map_InfoBattle_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034407d8 with catch @ 03440804
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0344075c with catch @ 03440808
                        */
                    /* try { // try from 03440818 to 0354081b has its CatchHandler @ 03440840 */
  if ((DAT_0456798e & 1) == 0) {
                    /* try { // try from 0344081c to 03540847 has its CatchHandler @ 03440680 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_0456798e = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03440818 with catch @ 03440840 */
                    /* try { // try from 03440848 to 0354084f has its CatchHandler @ 03440864 */
                    /* try { // try from 03440850 to 0354085b has its CatchHandler @ 03440680 */
  if ((__this->fields).JDNKKGPNHPB == 0x14) {
    pSVar2 = AFFHKININGD__IBMKPOJFGCD(__this,method);
  }
  else {
                    /* try { // try from 0344085c to 03540863 has its CatchHandler @ 03440864 */
    pSVar2 = AFFHKININGD__OKMNIODKDBA(__this,method);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03440848 with catch @ 03440864
                       catch(type#2 @ 00000000) { ... } // from try @ 0344085c with catch @ 03440864
                        */
                    /* try { // try from 03440868 to 0354099f has its CatchHandler @ 03440868
                       catch() { ... } // from try @ 03440868 with catch @ 03440868
                       catch() { ... } // from try @ 034409fc with catch @ 03440868
                       catch() { ... } // from try @ 03440a8c with catch @ 03440868
                       catch() { ... } // from try @ 03440a94 with catch @ 03440868
                       catch() { ... } // from try @ 03440ad0 with catch @ 03440868
                       catch() { ... } // from try @ 03440b18 with catch @ 03440868 */
  (__this->fields).IGIFBFEFIKG = pSVar2;
  thunk_FUN_01c20e04(&(__this->fields).IGIFBFEFIKG);
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((**(long **)(lVar3 + 0xb8) != 0) &&
       (__this_00 = *(Nekki_SF2_GUI_Map_InfoBattle_o **)(**(long **)(lVar3 + 0xb8) + 0xd0),
       __this_00 != (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0)) {
      Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfoIfSelected
                (__this_00,(__this->fields).IFJLLGPGMHM,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

