// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$InsertPlayer @ RVA 0x3480E4C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__InsertPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  CNIFAIKGHKO_o *pCVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this_00;
  IFFFKKMMKFO_o *__this_01;
  Nekki_SF2_GUI_SimpleScroll_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  
                    /* try { // try from 03580e68 to 03680e6f has its CatchHandler @ 03581288 */
  if ((DAT_0456837f & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidViewCell>__);
                    /* try { // try from 03580e78 to 03680e7f has its CatchHandler @ 035812a4 */
    FUN_01bab630(&IFFFKKMMKFO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 03580e90 to 03680e97 has its CatchHandler @ 035812a8 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03580e9c to 03680ea3 has its CatchHandler @ 035812ac */
    DAT_0456837f = 1;
  }
  pCVar2 = (__this->fields).JECONAHEKIN;
  if (pCVar2 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03580eb4 to 03680ebb has its CatchHandler @ 03581278 */
    bVar1 = CNIFAIKGHKO__NFJIIGCLFOF(pCVar2,HEHMPFLAEGE,(MethodInfo *)0x0);
    pCVar2 = (__this->fields).JECONAHEKIN;
                    /* try { // try from 03580ebc to 03680ecf has its CatchHandler @ 035812a0 */
    if (pCVar2 != (CNIFAIKGHKO_o *)0x0) {
      if (bVar1) {
                    /* try { // try from 03580ed4 to 03680edf has its CatchHandler @ 03581298 */
        CNIFAIKGHKO__JOMFHMDCMNG(pCVar2,HEHMPFLAEGE,true,(MethodInfo *)0x0);
      }
      else {
                    /* try { // try from 03580ee0 to 03680eeb has its CatchHandler @ 0358128c */
        CNIFAIKGHKO__LBHKALHJJHP(pCVar2,HEHMPFLAEGE,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._raidSliderItemPrefab;
                    /* try { // try from 03580efc to 03680f03 has its CatchHandler @ 0358129c */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03580f0c to 03680f13 has its CatchHandler @ 03581284 */
        pUVar4 = (UnityEngine_GameObject_o *)
                 UnityEngine_Object__Instantiate<object>
                           ((Il2CppObject *)pUVar4,
                            Method_UnityEngine_Object_Instantiate<GameObject>__);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03580fa8;
                    /* try { // try from 03580f24 to 03680f2b has its CatchHandler @ 03581294 */
        __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar4,Method_UnityEngine_GameObject_GetComponent<RaidViewCell>__);
                    /* try { // try from 03580f30 to 03680f37 has its CatchHandler @ 03581280 */
        __this_01 = (IFFFKKMMKFO_o *)thunk_FUN_01bda818(IFFFKKMMKFO_TypeInfo);
                    /* try { // try from 03580f48 to 03680f4f has its CatchHandler @ 0358127c */
                    /* try { // try from 03580f50 to 03680f63 has its CatchHandler @ 0358126c */
        IFFFKKMMKFO___ctor(__this_01,HEHMPFLAEGE,(MethodInfo *)0x0);
        if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)0x0) goto LAB_03580fa8;
                    /* try { // try from 03580f68 to 03680f73 has its CatchHandler @ 03581270 */
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__Init
                  (__this_00,__this_01,(__this->fields)._scroll,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._scroll;
                    /* try { // try from 03580f74 to 03680f7f has its CatchHandler @ 03581264 */
        if (__this_02 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_03580fa8;
                    /* try { // try from 03580f84 to 03680f8f has its CatchHandler @ 03581274 */
        Nekki_SF2_GUI_SimpleScroll__AddItem
                  (__this_02,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0);
      }
      pNVar3 = (__this->fields).OMFKAKGPCCM;
      if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
                    /* try { // try from 03580f94 to 03680f9f has its CatchHandler @ 03581250 */
        (pNVar3->fields).PDFPPFKDPOD = true;
        return;
      }
    }
  }
LAB_03580fa8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

