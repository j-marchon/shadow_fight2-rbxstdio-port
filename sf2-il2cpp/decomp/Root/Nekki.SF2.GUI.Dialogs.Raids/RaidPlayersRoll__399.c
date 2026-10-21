// TypeDefIndex 399
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidPlayersRoll : MonoBehaviour
// Fields:
//   private SimpleScroll _scroll; // 0x20
//   private GameObject _raidSliderItemPrefab; // 0x28
//   private RaidPlayersRoll.BEMANDGDHFJ OMFKAKGPCCM; // 0x30
//   private int <KDGCDFEGEHL>k__BackingField; // 0x38
//   private int NBNHIBIPJMG; // 0x3C
//   private CNIFAIKGHKO JECONAHEKIN; // 0x40

// ===== public void ScrollToItem(int OGPGLGPMEPD, float LFJGFLNMBMC)  [RVA 0x3480AA8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$ScrollToItem @ RVA 0x3480AA8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ScrollToItem
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,int32_t OGPGLGPMEPD,
               float LFJGFLNMBMC,MethodInfo *method)

{
  int32_t OGPGLGPMEPD_00;
  int32_t iVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  long lVar4;
  
  if ((DAT_0456837d & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_0456837d = 1;
  }
  pNVar3 = (__this->fields)._scroll;
  if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                      (*(System_Collections_Generic_List_T__o **)&(pNVar3->fields)._snapEase,
                       Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    if (bVar2) {
      return;
    }
    pNVar3 = (__this->fields)._scroll;
    if ((pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
       (lVar4 = *(long *)&(pNVar3->fields)._snapEase, lVar4 != 0)) {
      iVar1 = *(int *)(lVar4 + 0x18) + -1;
      if (OGPGLGPMEPD <= iVar1) {
        iVar1 = OGPGLGPMEPD;
      }
      OGPGLGPMEPD_00 = 0;
      if (-1 < OGPGLGPMEPD) {
        OGPGLGPMEPD_00 = iVar1;
      }
      Nekki_SF2_GUI_SimpleScroll__ScrollToItem
                (pNVar3,OGPGLGPMEPD_00,LFJGFLNMBMC,8,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private RaidViewCell GDHOEDANABL(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x3480B64]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$GDHOEDANABL @ RVA 0x3480B64

Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GDHOEDANABL
          (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
          MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  IFFFKKMMKFO_o *pIVar4;
  GKLPDMLELJF_o *pGVar5;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *pNVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456837e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_0456837e = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pNVar3 = (__this->fields)._scroll;
  if ((pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) ||
     (__this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar3->fields)._snapEase,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03580cc4 to 03680ccb has its CatchHandler @ 035812e4 */
    FUN_01bab8c8();
  }
                    /* try { // try from 03580c00 to 03680c27 has its CatchHandler @ 03581310 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,__this_00,
             Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__)
    ;
    if (!bVar2) {
      pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)0x0;
      break;
    }
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)local_50.fields._current ==
        (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)0x0) {
LAB_03580cb4:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03580cb4 to 03680cbb has its CatchHandler @ 035812f0 */
      FUN_01bab8c8();
    }
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).naturalAligment;
    if (((((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_c *)(local_50.fields._current)->klass)->_2).
         naturalAligment < bVar1) ||
       ((((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_c *)(local_50.fields._current)->klass)->_2).
        typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo)) goto LAB_03580cb4;
                    /* try { // try from 03580c64 to 03680c8b has its CatchHandler @ 0358130c */
    pIVar4 = ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_Fields *)
             ((long)local_50.fields._current + 0x10))->_LAIJDPOGGKB_k__BackingField;
    if (pIVar4 == (IFFFKKMMKFO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar5 = (pIVar4->fields)._IPNPNPOLCFO_k__BackingField;
    if (pGVar5 == (GKLPDMLELJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)local_50.fields._current;
  } while ((pGVar5->fields).ANAJGHJEEOC != (HEHMPFLAEGE->fields).ANAJGHJEEOC);
                    /* try { // try from 03580c94 to 03680ca3 has its CatchHandler @ 03581318 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
  return pNVar6;
}


// ===== public void UpdateRaidStatus(GKLPDMLELJF HEHMPFLAEGE, PMCKBFPNGOD IMCNFANMLKD)  [RVA 0x3480D3C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$UpdateRaidStatus @ RVA 0x3480D3C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdateRaidStatus
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
               int32_t IMCNFANMLKD,MethodInfo *method)

{
  CNIFAIKGHKO_o *__this_00;
  IFFFKKMMKFO_o *pIVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar2;
  
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03580d58 to 03680d5b has its CatchHandler @ 035812b0 */
    pIVar1 = CNIFAIKGHKO__KNMENIBLFGF(__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
                    /* try { // try from 03580d5c to 03680d6b has its CatchHandler @ 035812e0 */
    if (pIVar1 != (IFFFKKMMKFO_o *)0x0) {
      (pIVar1->fields).FPPPAMFABJP = IMCNFANMLKD;
      pNVar2 = (__this->fields).OMFKAKGPCCM;
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0)
      goto LAB_03580d80;
      (pNVar2->fields).PDFPPFKDPOD = true;
    }
                    /* try { // try from 03580d7c to 03680d83 has its CatchHandler @ 035812bc */
    return;
  }
LAB_03580d80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NCMPNFLGPPE(NODLJPNGNBG EMMICKBACOI)  [RVA 0x3480D90]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$NCMPNFLGPPE @ RVA 0x3480D90

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__NCMPNFLGPPE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,NODLJPNGNBG_o *EMMICKBACOI,
               MethodInfo *method)

{
  CNIFAIKGHKO_o *__this_00;
  IFFFKKMMKFO_o *pIVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar2;
  
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03580da4 to 03680dab has its CatchHandler @ 035812dc */
    pIVar1 = CNIFAIKGHKO__KNMENIBLFGF(__this_00,EMMICKBACOI,(MethodInfo *)0x0);
                    /* try { // try from 03580db0 to 03680db7 has its CatchHandler @ 035812cc */
    if (pIVar1 == (IFFFKKMMKFO_o *)0x0) {
      return;
    }
    if (EMMICKBACOI != (NODLJPNGNBG_o *)0x0) {
      (pIVar1->fields).JOAHABGBLEF = (float)(EMMICKBACOI->fields).LINGIJDCLLC;
      pNVar2 = (__this->fields).OMFKAKGPCCM;
                    /* try { // try from 03580dc8 to 03680dcf has its CatchHandler @ 035812c4 */
      if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
                    /* try { // try from 03580dd0 to 03680de3 has its CatchHandler @ 035812b4 */
        (pNVar2->fields).PDFPPFKDPOD = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetPlayersCount()  [RVA 0x3480DE4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$GetPlayersCount @ RVA 0x3480DE4

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayersCount
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  CNIFAIKGHKO_o *__this_00;
  
                    /* try { // try from 03580de8 to 03680df3 has its CatchHandler @ 035812d8 */
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03580df4 to 03680dff has its CatchHandler @ 035812c0 */
    iVar1 = CNIFAIKGHKO__LDJLMEFOMLG(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x3480E00]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$Update @ RVA 0x3480E00

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__Update
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *__this_00;
  MethodInfo *in_x2;
  
                    /* try { // try from 03580e04 to 03680e0b has its CatchHandler @ 035812c8 */
  __this_00 = (__this->fields).OMFKAKGPCCM;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
                    /* try { // try from 03580e14 to 03680e23 has its CatchHandler @ 035812d0 */
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ__LLCONNGHGKD(__this_00,__this,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void InsertPlayer(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x3480E4C]
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


// ===== public void set_BossId(int CJNHFNHJHPE)  [RVA 0x3480FAC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$set_BossId @ RVA 0x3480FAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__set_BossId
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._KDGCDFEGEHL_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void UpdateInsertedPlayer(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x3480FB4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$UpdateInsertedPlayer @ RVA 0x3480FB4

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdateInsertedPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  CNIFAIKGHKO_o *pCVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar3;
  
                    /* try { // try from 03580fb8 to 03680fc7 has its CatchHandler @ 03581248 */
  pCVar2 = (__this->fields).JECONAHEKIN;
  if (pCVar2 != (CNIFAIKGHKO_o *)0x0) {
    bVar1 = CNIFAIKGHKO__NFJIIGCLFOF(pCVar2,HEHMPFLAEGE,(MethodInfo *)0x0);
                    /* try { // try from 03580fd4 to 03680fdb has its CatchHandler @ 03581240 */
    if (!bVar1) {
                    /* try { // try from 03581008 to 0368100f has its CatchHandler @ 03581230 */
      return;
    }
    pCVar2 = (__this->fields).JECONAHEKIN;
    if (pCVar2 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03580fe4 to 03680feb has its CatchHandler @ 03581238 */
      CNIFAIKGHKO__JOMFHMDCMNG(pCVar2,HEHMPFLAEGE,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).OMFKAKGPCCM;
      if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
                    /* try { // try from 03580ffc to 03681003 has its CatchHandler @ 03581200 */
        (pNVar3->fields).PDFPPFKDPOD = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool HasPlayer(long OGPGLGPMEPD)  [RVA 0x3481010]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$HasPlayer @ RVA 0x3481010

bool Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__HasPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,int64_t OGPGLGPMEPD,
               MethodInfo *method)

{
  bool bVar1;
  CNIFAIKGHKO_o *__this_00;
  
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 03581020 to 03681027 has its CatchHandler @ 0358120c */
    bVar1 = CNIFAIKGHKO__NFJIIGCLFOF(__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03581028 to 0368103b has its CatchHandler @ 035811f8 */
  FUN_01bab8c8();
}


// ===== public void InsertPlayer(NODLJPNGNBG OGFALADNBHC, GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x348102C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$InsertPlayer @ RVA 0x348102C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__InsertPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,NODLJPNGNBG_o *OGFALADNBHC,
               GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)HEHMPFLAEGE;
                    /* try { // try from 03581040 to 0368104b has its CatchHandler @ 03581220 */
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__InsertPlayer
            (__this,HEHMPFLAEGE,(MethodInfo *)HEHMPFLAEGE);
                    /* try { // try from 0358104c to 0368106b has its CatchHandler @ 0358124c */
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__NCMPNFLGPPE(__this,OGFALADNBHC,method_00);
  if (OGFALADNBHC != (NODLJPNGNBG_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdateRaidStatus
              (__this,HEHMPFLAEGE,(OGFALADNBHC->fields).PFJPLCAIGJH,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x3481074]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$Init @ RVA 0x3481074

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
                    /* try { // try from 03581078 to 0368107f has its CatchHandler @ 0358123c */
  __this_00 = (__this->fields)._scroll;
  (__this->fields)._KDGCDFEGEHL_k__BackingField = 0;
  (__this->fields).NBNHIBIPJMG = 0;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* try { // try from 03581088 to 0368108f has its CatchHandler @ 035811fc */
    Nekki_SF2_GUI_SimpleScroll__Init(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3481098]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$.ctor @ RVA 0x3481098

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o **ppNVar1;
  CNIFAIKGHKO_o *__this_01;
  CNIFAIKGHKO_o **ppCVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035810a0 to 036810a7 has its CatchHandler @ 03581234 */
                    /* try { // try from 035810ac to 036810b3 has its CatchHandler @ 03581228 */
  if ((DAT_04568380 & 1) == 0) {
                    /* try { // try from 035810c4 to 036810cb has its CatchHandler @ 03581210 */
                    /* try { // try from 035810cc to 036810df has its CatchHandler @ 03581208 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_TypeInfo);
    FUN_01bab630(&CNIFAIKGHKO_TypeInfo);
    DAT_04568380 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035810e4 to 036810ef has its CatchHandler @ 03581214 */
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_TypeInfo,
                                 method);
                    /* try { // try from 035810f0 to 0368110b has its CatchHandler @ 03581254 */
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields).OMFKAKGPCCM;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (CNIFAIKGHKO_o *)thunk_FUN_01bda818(CNIFAIKGHKO_TypeInfo);
  CNIFAIKGHKO___ctor(__this_01,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).JECONAHEKIN;
                    /* try { // try from 0358111c to 03681127 has its CatchHandler @ 0358122c */
  *ppCVar2 = __this_01;
                    /* try { // try from 03581128 to 036811b7 has its CatchHandler @ 03580994 */
  thunk_FUN_01c20e04(ppCVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int get_BossId()  [RVA 0x348114C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$get_BossId @ RVA 0x348114C

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__get_BossId
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  return (__this->fields)._KDGCDFEGEHL_k__BackingField;
}


// ===== public void ShowNotEnoughDamageHint_ForPlayer()  [RVA 0x3481154]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$ShowNotEnoughDamageHint_ForPlayer @ RVA 0x3481154

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ShowNotEnoughDamageHint_ForPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_01;
  undefined8 uVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  undefined1 auVar5 [16];
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04568381 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    auVar5 = FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_04568381 = 1;
  }
  uVar3 = auVar5._0_8_;
                    /* try { // try from 035811b8 to 036811bb has its CatchHandler @ 035812fc */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* try { // try from 035811bc to 036811bf has its CatchHandler @ 035812f8 */
  local_50.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 035811c0 to 036811c3 has its CatchHandler @ 035812f4 */
  pNVar4 = (__this->fields)._scroll;
                    /* try { // try from 035811c4 to 036811c7 has its CatchHandler @ 035812b8 */
                    /* try { // try from 035811c8 to 036811cb has its CatchHandler @ 03581290 */
                    /* try { // try from 035811cc to 036811cf has its CatchHandler @ 03581268 */
  if ((pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_01 = *(System_Collections_Generic_List_object__o **)&(pNVar4->fields)._snapEase,
     uVar3 = 0, __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
                    /* try { // try from 035811d0 to 036811d3 has its CatchHandler @ 03581260 */
                    /* try { // try from 035811d4 to 036811d7 has its CatchHandler @ 03581224 */
                    /* try { // try from 035811d8 to 036811db has its CatchHandler @ 0358121c */
                    /* try { // try from 035811dc to 036811df has its CatchHandler @ 03581218 */
                    /* try { // try from 035811e0 to 036811e3 has its CatchHandler @ 03581204 */
                    /* try { // try from 035811e4 to 036811e7 has its CatchHandler @ 03580994 */
                    /* try { // try from 035811e8 to 036811eb has its CatchHandler @ 035811f4 */
                    /* try { // try from 035811ec to 0368132f has its CatchHandler @ 03580994 */
                    /* catch() { ... } // from try @ 035811e8 with catch @ 035811f4 */
                    /* catch() { ... } // from try @ 03581028 with catch @ 035811f8 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,__this_01,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
                    /* catch() { ... } // from try @ 03581088 with catch @ 035811fc */
                    /* catch() { ... } // from try @ 03580ffc with catch @ 03581200 */
                    /* catch() { ... } // from try @ 035811e0 with catch @ 03581204 */
    local_50.fields._list = local_68.fields._list;
                    /* catch() { ... } // from try @ 035810cc with catch @ 03581208 */
    local_50.fields._current = local_68.fields._current;
    while( true ) {
                    /* catch() { ... } // from try @ 03581020 with catch @ 0358120c */
                    /* catch() { ... } // from try @ 035810c4 with catch @ 03581210 */
                    /* catch() { ... } // from try @ 035810e4 with catch @ 03581214 */
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      __this_00 = local_50.fields._current;
                    /* catch() { ... } // from try @ 035811dc with catch @ 03581218 */
      if (!bVar2) {
                    /* catch() { ... } // from try @ 03580f68 with catch @ 03581270 */
                    /* catch() { ... } // from try @ 03580f84 with catch @ 03581274 */
                    /* catch() { ... } // from try @ 03580eb4 with catch @ 03581278 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
                    /* catch() { ... } // from try @ 03580f48 with catch @ 0358127c */
                    /* catch() { ... } // from try @ 03580f30 with catch @ 03581280 */
                    /* catch() { ... } // from try @ 03580f0c with catch @ 03581284 */
                    /* catch() { ... } // from try @ 03580e68 with catch @ 03581288 */
                    /* catch() { ... } // from try @ 03580ee0 with catch @ 0358128c */
        return;
      }
                    /* catch() { ... } // from try @ 035811d8 with catch @ 0358121c */
                    /* catch() { ... } // from try @ 03581040 with catch @ 03581220 */
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)local_50.fields._current ==
          (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)0x0) break;
                    /* catch() { ... } // from try @ 035811d4 with catch @ 03581224 */
                    /* catch() { ... } // from try @ 035810ac with catch @ 03581228 */
                    /* catch() { ... } // from try @ 0358111c with catch @ 0358122c */
                    /* catch() { ... } // from try @ 03581008 with catch @ 03581230 */
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 035810a0 with catch @ 03581234 */
                    /* catch() { ... } // from try @ 03580fe4 with catch @ 03581238 */
                    /* catch() { ... } // from try @ 03581078 with catch @ 0358123c */
                    /* catch() { ... } // from try @ 03580fd4 with catch @ 03581240 */
                    /* catch() { ... } // from try @ 03580e44 with catch @ 03581244 */
                    /* catch() { ... } // from try @ 03580fb8 with catch @ 03581248 */
                    /* catch() { ... } // from try @ 0358104c with catch @ 0358124c */
      if (((((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_c *)(local_50.fields._current)->klass)->_2).
           naturalAligment < bVar1) ||
         ((((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_c *)(local_50.fields._current)->klass)->_2).
          typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo)) {
                    /* catch() { ... } // from try @ 035811c8 with catch @ 03581290 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03580f24 with catch @ 03581294 */
        FUN_01babc64(local_50.fields._current);
      }
                    /* catch() { ... } // from try @ 03580f94 with catch @ 03581250 */
                    /* catch() { ... } // from try @ 035810f0 with catch @ 03581254 */
                    /* catch() { ... } // from try @ 03580e48 with catch @ 03581258 */
      bVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__get_IsPlayer
                        ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)local_50.fields._current,
                         (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03580e28 with catch @ 0358125c */
      if (bVar2) {
                    /* catch() { ... } // from try @ 035811d0 with catch @ 03581260 */
                    /* catch() { ... } // from try @ 03580f74 with catch @ 03581264 */
                    /* catch() { ... } // from try @ 035811cc with catch @ 03581268 */
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__ShowDamageHint
                  ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03580f50 with catch @ 0358126c */
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03580ed4 with catch @ 03581298 */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03580efc with catch @ 0358129c */
  FUN_01bab8c8(uVar3,auVar5._8_8_);
}


// ===== private void ELGDDCNOLJL()  [RVA 0x3481310]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$ELGDDCNOLJL @ RVA 0x3481310

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ELGDDCNOLJL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  bool value;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  int32_t OGPGLGPMEPD;
  
                    /* catch() { ... } // from try @ 03580c00 with catch @ 03581310 */
                    /* catch() { ... } // from try @ 03580d2c with catch @ 03581314 */
                    /* catch() { ... } // from try @ 03580c94 with catch @ 03581318 */
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ArrangeBySiblingIndex(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
                    /* try { // try from 03581330 to 03681333 has its CatchHandler @ 03581340 */
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      value = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
                    /* catch() { ... } // from try @ 03581330 with catch @ 03581340 */
      if (value) {
        if (pNVar1 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_03581398;
        OGPGLGPMEPD = (__this->fields).NBNHIBIPJMG;
      }
      else {
        if (pNVar1 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_03581398;
        OGPGLGPMEPD = 0;
      }
      Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar1,OGPGLGPMEPD,0.0,8,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
                    /* try { // try from 03581380 to 036813a7 has its CatchHandler @ 035813bc */
      if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)pNVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03581398:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IFFFKKMMKFO GetPlayerCellInfoForTest(GKLPDMLELJF HEHMPFLAEGE)  [RVA 0x348139C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$GetPlayerCellInfoForTest @ RVA 0x348139C

IFFFKKMMKFO_o *
Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayerCellInfoForTest
          (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,
          MethodInfo *method)

{
  CNIFAIKGHKO_o *__this_00;
  IFFFKKMMKFO_o *pIVar1;
  
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
                    /* try { // try from 035813a8 to 036813b3 has its CatchHandler @ 03580994 */
    pIVar1 = CNIFAIKGHKO__KNMENIBLFGF(__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035813b4 to 036813bb has its CatchHandler @ 035813bc */
  FUN_01bab8c8();
}


// ===== private void HBCBPCIJJJB(bool NBLGPIMANHP)  [RVA 0x34813B8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$HBCBPCIJJJB @ RVA 0x34813B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__HBCBPCIJJJB
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,bool NBLGPIMANHP,
               MethodInfo *method)

{
  System_Comparison_IFFFKKMMKFO__o *NGDCHEBEAJK;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_00;
  IFFFKKMMKFO_o *CIBAPJNKHGA;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  MethodInfo *pMVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  CNIFAIKGHKO_o *pCVar2;
  int index;
  
  pMVar1 = (MethodInfo *)(ulong)NBLGPIMANHP;
                    /* catch() { ... } // from try @ 03581380 with catch @ 035813bc
                       catch() { ... } // from try @ 035813b4 with catch @ 035813bc */
  if ((DAT_04568382 & 1) == 0) {
    FUN_01bab630(&System_Comparison<IFFFKKMMKFO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_ALGBNCBBIHJ__);
    DAT_04568382 = 1;
    pMVar1 = extraout_x1;
  }
  if (NBLGPIMANHP) {
    pCVar2 = (__this->fields).JECONAHEKIN;
    NGDCHEBEAJK = (System_Comparison_IFFFKKMMKFO__o *)
                  thunk_FUN_01bda818(System_Comparison<IFFFKKMMKFO>_TypeInfo);
    System_Comparison<object>___ctor();
    if (pCVar2 == (CNIFAIKGHKO_o *)0x0) goto LAB_03581518;
    CNIFAIKGHKO__AOFMCBBKHEE(pCVar2,NGDCHEBEAJK,true,(MethodInfo *)0x0);
    pMVar1 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__BFAFJLCDLGC(__this,pMVar1);
  pCVar2 = (__this->fields).JECONAHEKIN;
  if ((pCVar2 != (CNIFAIKGHKO_o *)0x0) &&
     (__this_00 = CNIFAIKGHKO__ACBMLHJIFMD(pCVar2,(MethodInfo *)0x0),
     __this_00 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0)) {
                    /* try { // try from 03581488 to 0368192f has its CatchHandler @ 03581488
                       catch() { ... } // from try @ 03581488 with catch @ 03581488
                       catch() { ... } // from try @ 035828b0 with catch @ 03581488
                       catch() { ... } // from try @ 035829b8 with catch @ 03581488
                       catch() { ... } // from try @ 035829c0 with catch @ 03581488
                       catch() { ... } // from try @ 03582db8 with catch @ 03581488 */
    pMVar1 = extraout_x1_01;
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        pMVar1 = Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__;
        CIBAPJNKHGA = (IFFFKKMMKFO_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
        if ((CIBAPJNKHGA == (IFFFKKMMKFO_o *)0x0) ||
           (__this_01 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GDHOEDANABL
                                  (__this,(CIBAPJNKHGA->fields)._IPNPNPOLCFO_k__BackingField,pMVar1)
           , __this_01 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)0x0)) goto LAB_03581518;
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__Init
                  (__this_01,CIBAPJNKHGA,(__this->fields)._scroll,(MethodInfo *)0x0);
        __this_02 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if (__this_02 == (UnityEngine_Transform_o *)0x0) goto LAB_03581518;
        UnityEngine_Transform__SetSiblingIndex(__this_02,index,(MethodInfo *)0x0);
        index = index + 1;
        pMVar1 = extraout_x1_02;
      } while (index < (__this_00->fields)._size);
    }
    Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ELGDDCNOLJL(__this,pMVar1);
    return;
  }
LAB_03581518:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnRaidExpire()  [RVA 0x34818B8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$OnRaidExpire @ RVA 0x34818B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__OnRaidExpire
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  bool bVar1;
  CNIFAIKGHKO_o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568383 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_GetEnumerator__);
    DAT_04568383 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JECONAHEKIN;
  if ((__this_00 != (CNIFAIKGHKO_o *)0x0) &&
     (__this_01 = CNIFAIKGHKO__ACBMLHJIFMD(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0)) {
                    /* try { // try from 03581930 to 03681957 has its CatchHandler @ 03582cf8 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IFFFKKMMKFO>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_MoveNext__);
      if (!bVar1) break;
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined4 *)((long)&local_48.fields._current[1].monitor + 4) = 3;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_Dispose__);
    pNVar2 = (__this->fields).OMFKAKGPCCM;
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
                    /* try { // try from 03581994 to 036819bb has its CatchHandler @ 03582cf4 */
      (pNVar2->fields).PDFPPFKDPOD = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdatePlayersDan()  [RVA 0x3481A24]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$UpdatePlayersDan @ RVA 0x3481A24

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__UpdatePlayersDan
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar1;
  
  pNVar1 = (__this->fields).OMFKAKGPCCM;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
    (pNVar1->fields).PDFPPFKDPOD = true;
                    /* try { // try from 03581a38 to 03681a3f has its CatchHandler @ 03582cd0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03581a40 to 03681a53 has its CatchHandler @ 03582ce4 */
  FUN_01bab8c8();
}


// ===== private static int ALGBNCBBIHJ(IFFFKKMMKFO INOIMHOFGBG, IFFFKKMMKFO ACNOGKFFDEG)  [RVA 0x3481A44]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$ALGBNCBBIHJ @ RVA 0x3481A44

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ALGBNCBBIHJ
                  (IFFFKKMMKFO_o *INOIMHOFGBG,IFFFKKMMKFO_o *ACNOGKFFDEG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  float *method_00;
  GKLPDMLELJF_o *pGVar3;
  System_DateTime_o SVar4;
  System_DateTime_o SVar5;
  float __this;
  float value;
  int64_t local_38;
  
                    /* try { // try from 03581a58 to 03681a63 has its CatchHandler @ 03582cdc */
                    /* try { // try from 03581a64 to 03681a83 has its CatchHandler @ 03582d24 */
  if ((DAT_04568384 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    DAT_04568384 = 1;
  }
  if (INOIMHOFGBG == ACNOGKFFDEG) {
    iVar2 = 0;
  }
  else {
    if ((INOIMHOFGBG == (IFFFKKMMKFO_o *)0x0) || (ACNOGKFFDEG == (IFFFKKMMKFO_o *)0x0)) {
LAB_03581b50:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03581a90 to 03681a97 has its CatchHandler @ 03582cc8 */
    __this = (INOIMHOFGBG->fields).JOAHABGBLEF;
    method_00 = &(ACNOGKFFDEG->fields).JOAHABGBLEF;
    value = *method_00;
    if (__this == value) {
                    /* try { // try from 03581aa0 to 03681aa7 has its CatchHandler @ 03582c58 */
      SVar4.fields._dateData =
           (System_DateTime_Fields)
           (INOIMHOFGBG->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData;
      SVar5.fields._dateData =
           (System_DateTime_Fields)
           (ACNOGKFFDEG->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData;
                    /* try { // try from 03581ab8 to 03681abf has its CatchHandler @ 03582c98 */
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03581ac4 to 03681acb has its CatchHandler @ 03582c60 */
      bVar1 = System_DateTime__op_Inequality(SVar4,SVar5,(MethodInfo *)0x0);
      if (!bVar1) {
        pGVar3 = (INOIMHOFGBG->fields)._IPNPNPOLCFO_k__BackingField;
        if (pGVar3 != (GKLPDMLELJF_o *)0x0) {
          local_38 = (pGVar3->fields).ANAJGHJEEOC;
          pGVar3 = (ACNOGKFFDEG->fields)._IPNPNPOLCFO_k__BackingField;
          if (pGVar3 != (GKLPDMLELJF_o *)0x0) {
                    /* try { // try from 03581b34 to 03681b3b has its CatchHandler @ 03582c7c */
            iVar2 = System_Int64__CompareTo
                              ((int64_t)&local_38,(pGVar3->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
            return iVar2;
          }
        }
        goto LAB_03581b50;
      }
      SVar5.fields._dateData =
           (System_DateTime_Fields)
           (INOIMHOFGBG->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData;
                    /* try { // try from 03581adc to 03681ae3 has its CatchHandler @ 03582cb8 */
      SVar4.fields._dateData =
           (System_DateTime_Fields)
           (ACNOGKFFDEG->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData;
                    /* try { // try from 03581ae4 to 03681af7 has its CatchHandler @ 03582cbc */
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = System_DateTime__Compare(SVar5,SVar4,(MethodInfo *)0x0);
                    /* try { // try from 03581afc to 03681b07 has its CatchHandler @ 03582c8c */
    }
    else {
                    /* try { // try from 03581b08 to 03681b27 has its CatchHandler @ 03582d1c */
      iVar2 = System_Single__CompareTo(__this,value,(MethodInfo *)method_00);
    }
  }
                    /* try { // try from 03581b44 to 03681b4b has its CatchHandler @ 03582c94 */
  return iVar2;
}


// ===== private void BFAFJLCDLGC()  [RVA 0x348151C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$BFAFJLCDLGC @ RVA 0x348151C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__BFAFJLCDLGC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  CNIFAIKGHKO_o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  AJOGJBFNELI_o *pAVar4;
  Il2CppObject *__this_02;
  Il2CppObject *pIVar5;
  CNLGMNIEGFG_o *pCVar6;
  System_Collections_Generic_Dictionary_int__object__o *pSVar7;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *CJNHFNHJHPE;
  Il2CppClass *pIVar8;
  PJKHAJKEHEL_o *pPVar9;
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar10;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar11;
  int index;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  
  if ((DAT_04568385 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Keys__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<int>__);
    FUN_01bab630(&System_Func<int,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_JMBPJPDAHED_NJFPJLEMILA__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_JMBPJPDAHED_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568385 = 1;
  }
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
    __this_01 = CNIFAIKGHKO__ACBMLHJIFMD(__this_00,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    pAVar4 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
    if ((pAVar4 != (AJOGJBFNELI_o *)0x0) &&
       (AJOGJBFNELI__EPFNGHLFCDC(pAVar4,-1,(MethodInfo *)0x0),
       __this_01 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0)) {
      if (0 < (__this_01->fields)._size) {
        index = 0;
        do {
          __this_02 = (Il2CppObject *)
                      thunk_FUN_01bda818(
                                        Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_JMBPJPDAHED_TypeInfo
                                        );
          System_Object___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 == (Il2CppObject *)0x0) goto LAB_035818b4;
          iVar1 = index + 1;
          *(int *)&__this_02[1].klass = iVar1;
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
          if (pIVar5 == (Il2CppObject *)0x0) goto LAB_035818b4;
          if (*(char *)&pIVar5[1].klass != '\0') {
            (__this->fields).NBNHIBIPJMG = *(int32_t *)&__this_02[1].klass;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar4 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
            if (pAVar4 == (AJOGJBFNELI_o *)0x0) goto LAB_035818b4;
            AJOGJBFNELI__EPFNGHLFCDC(pAVar4,*(int32_t *)&__this_02[1].klass,(MethodInfo *)0x0);
          }
          *(undefined4 *)&pIVar5[3].monitor = *(undefined4 *)&__this_02[1].klass;
          iVar3 = (__this->fields)._KDGCDFEGEHL_k__BackingField;
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pCVar6 = MGNPHCAAEIO__MJDCGINJMOP(iVar3,false,(MethodInfo *)0x0);
          if ((pCVar6 == (CNLGMNIEGFG_o *)0x0) ||
             (pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (pCVar6->fields).MOGNLMJONAL,
             pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0))
          goto LAB_035818b4;
          bVar2 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                            (pSVar7,*(int32_t *)&__this_02[1].klass,
                             Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_ContainsKey__
                            );
          if (bVar2) {
            if (0.0 < *(float *)&pIVar5[1].monitor) {
              pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (pCVar6->fields).MOGNLMJONAL;
              if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
              goto LAB_035818b4;
              iVar3 = *(int32_t *)&__this_02[1].klass;
LAB_03581804:
              pIVar8 = (Il2CppClass *)
                       System_Collections_Generic_Dictionary<int,_object>__get_Item
                                 (pSVar7,iVar3,
                                  Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Item__
                                 );
              if (pIVar8 != (Il2CppClass *)0x0) {
                pIVar5[3].klass = pIVar8;
                thunk_FUN_01c20e04();
              }
            }
          }
          else {
            pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                     (pCVar6->fields).MOGNLMJONAL;
            if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
            goto LAB_035818b4;
            source = System_Collections_Generic_Dictionary<int,_object>__get_Keys
                               (pSVar7,
                                Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Keys__
                               );
            predicate = (System_Func_TSource__bool__o *)
                        thunk_FUN_01bda818(System_Func<int,_bool>_TypeInfo);
            System_Func<int,_bool>___ctor();
            source_00 = System_Linq_Enumerable__Where<int>
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                   predicate,Method_System_Linq_Enumerable_Where<int>__);
            CJNHFNHJHPE = System_Linq_Enumerable__ToList<int>
                                    (source_00,Method_System_Linq_Enumerable_ToList<int>__);
            bVar2 = DJNBJHPDKDP__OBECCOPBADO<int>
                              ((System_Collections_Generic_List_T__o *)CJNHFNHJHPE,
                               Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
            if (((!bVar2) &&
                (iVar3 = System_Linq_Enumerable__Max
                                   ((System_Collections_Generic_IEnumerable_int__o *)CJNHFNHJHPE,
                                    (MethodInfo *)0x0), iVar3 != 0)) &&
               (0.0 < *(float *)&pIVar5[1].monitor)) {
              pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (pCVar6->fields).MOGNLMJONAL;
              if (pSVar7 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)
              goto LAB_03581804;
              goto LAB_035818b4;
            }
          }
          OKBIKHHKOEN = (pCVar6->fields).super.MECHOBPGHFJ;
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pPVar9 = MGNPHCAAEIO__DDHNCKDHKAC(OKBIKHHKOEN,(MethodInfo *)0x0);
          if (pPVar9 == (PJKHAJKEHEL_o *)0x0) goto LAB_035818b4;
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pPVar9->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
          pCVar10 = (pCVar6->fields).BOOKHNOMHGM;
          if (pCVar10 == (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) goto LAB_035818b4;
          *(float *)((long)&pIVar5[1].klass + 4) = (pCVar10->fields).LMBCNLBOPAF * (float)iVar3;
          index = iVar1;
        } while (iVar1 < (__this_01->fields)._size);
      }
      pNVar11 = (__this->fields).OMFKAKGPCCM;
      if (pNVar11 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
        (pNVar11->fields).PDFPPFKDPOD = true;
        return;
      }
    }
  }
LAB_035818b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetPlayersInBattleCount()  [RVA 0x3481B5C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$GetPlayersInBattleCount @ RVA 0x3481B5C

int32_t Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayersInBattleCount
                  (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  bool bVar1;
  CNIFAIKGHKO_o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 03581b5c to 03681b63 has its CatchHandler @ 03582c80 */
                    /* try { // try from 03581b68 to 03681b6f has its CatchHandler @ 03582cac */
  if ((DAT_04568386 & 1) == 0) {
                    /* try { // try from 03581b80 to 03681b87 has its CatchHandler @ 03582c9c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_Dispose__);
                    /* try { // try from 03581b88 to 03681b9b has its CatchHandler @ 03582cb4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_get_Current__);
                    /* try { // try from 03581ba0 to 03681bab has its CatchHandler @ 03582c78 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_GetEnumerator__);
                    /* try { // try from 03581bac to 03681bc7 has its CatchHandler @ 03582d20 */
    DAT_04568386 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JECONAHEKIN;
  if ((__this_00 != (CNIFAIKGHKO_o *)0x0) &&
     (__this_01 = CNIFAIKGHKO__ACBMLHJIFMD(__this_00,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0)) {
                    /* try { // try from 03581bd4 to 03681bdb has its CatchHandler @ 03582cc0 */
                    /* try { // try from 03581be4 to 03681beb has its CatchHandler @ 03582cb0 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IFFFKKMMKFO>_GetEnumerator__);
    iVar2 = 0;
    while( true ) {
                    /* try { // try from 03581bfc to 03681c03 has its CatchHandler @ 03582c70 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_MoveNext__);
      if (!bVar1) {
                    /* try { // try from 03581c20 to 03681c27 has its CatchHandler @ 03582c6c */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<IFFFKKMMKFO>_Dispose__);
                    /* try { // try from 03581c28 to 03681c3b has its CatchHandler @ 03582c90 */
        return iVar2;
      }
                    /* try { // try from 03581c08 to 03681c0f has its CatchHandler @ 03582ca4 */
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      if (*(int *)((long)&local_38.fields._current[1].monitor + 4) == 2) {
        iVar2 = iVar2 + 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03581c40 to 03681c4b has its CatchHandler @ 03582c84 */
  FUN_01bab8c8();
}

