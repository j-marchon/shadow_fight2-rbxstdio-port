// TypeDefIndex 475
// Namespace: Nekki.SF2.GUI.Dialogs
// public class EventDialog : BaseDialog
// Fields:
//   private GameObject _mapButtonPrefab; // 0xC8
//   private RectTransform _storyParent1; // 0xD0
//   private RectTransform _storyParent2; // 0xD8
//   private RectTransform _innerStripe; // 0xE0
//   private RectTransform _raidParent1; // 0xE8
//   private RectTransform _raidParent2; // 0xF0
//   private const int BNFOKMJECML = 300;
//   private const int KBMCAHDDOFG = 3;
//   private const int HEEHMIIGDEN = 1850;
//   private MapButton JDAMBHONLJH; // 0xF8

// ===== public void .ctor()  [RVA 0x35809F4]
// Nekki.SF2.GUI.Dialogs.EventDialog$$.ctor @ RVA 0x35809F4

void Nekki_SF2_GUI_Dialogs_EventDialog___ctor
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x35809FC]
// Nekki.SF2.GUI.Dialogs.EventDialog$$OnDestroy @ RVA 0x35809FC

void Nekki_SF2_GUI_Dialogs_EventDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  NCNJEIBHGBH_o *pNVar1;
  System_Action_FKNCNNOOOIO__o *pSVar2;
  
  if ((DAT_04568ccd & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_EventDialog_AIIOJJEPJMD__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_EventDialog_GBODNEDLIDF__);
    DAT_04568ccd = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__ILJKHKMFKAJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar2 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pNVar1 != (NCNJEIBHGBH_o *)0x0) {
      NCNJEIBHGBH__BDNPBMBKLKE(pNVar1,pSVar2,(MethodInfo *)0x0);
      pNVar1 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
      pSVar2 = (System_Action_FKNCNNOOOIO__o *)
               thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (NCNJEIBHGBH_o *)0x0) {
        NCNJEIBHGBH__CFPDPJKHALN(pNVar1,pSVar2,(MethodInfo *)0x0);
        pNVar1 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
        pSVar2 = (System_Action_FKNCNNOOOIO__o *)
                 thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar1 != (NCNJEIBHGBH_o *)0x0) {
                    /* try { // try from 03680b64 to 03780c23 has its CatchHandler @ 03680b64
                       catch() { ... } // from try @ 03680b64 with catch @ 03680b64
                       catch() { ... } // from try @ 03680c2c with catch @ 03680b64
                       catch() { ... } // from try @ 03680cc4 with catch @ 03680b64
                       catch() { ... } // from try @ 03680cf4 with catch @ 03680b64
                       catch() { ... } // from try @ 03680d24 with catch @ 03680b64 */
          NCNJEIBHGBH__DPBCMGAOJOP(pNVar1,pSVar2,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
                    ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int EEHJPNCNNGP(List<MapButton> EDEHNHIHDDH, out float KNBLBCAPOCH)  [RVA 0x3580B8C]
// Nekki.SF2.GUI.Dialogs.EventDialog$$EEHJPNCNNGP @ RVA 0x3580B8C

int32_t Nekki_SF2_GUI_Dialogs_EventDialog__EEHJPNCNNGP
                  (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,
                  System_Collections_Generic_List_MapButton__o *EDEHNHIHDDH,float *KNBLBCAPOCH,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04568cce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    __this = (Nekki_SF2_GUI_Dialogs_EventDialog_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_get_Count__);
    DAT_04568cce = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (EDEHNHIHDDH != (System_Collections_Generic_List_MapButton__o *)0x0) {
    iVar1 = (EDEHNHIHDDH->fields)._size;
    if (iVar1 < 7) {
      iVar3 = 3;
    }
    else {
                    /* try { // try from 03680c24 to 03780c2b has its CatchHandler @ 03680cd4 */
      if (DAT_0456033d == '\0') {
                    /* try { // try from 03680c2c to 03780cb3 has its CatchHandler @ 03680b64 */
        FUN_01bab630(&System_Math_TypeInfo);
        DAT_0456033d = '\x01';
      }
      fVar4 = (float)iVar1 * 0.5;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar3 = -0x80000000;
      if ((float)(int)fVar4 != INFINITY) {
        iVar3 = (int)fVar4;
      }
    }
    *KNBLBCAPOCH = 0.0;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)EDEHNHIHDDH,
               Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
      if (!bVar2) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680cb4 with catch @ 03680cd8
                        */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__)
        ;
                    /* try { // try from 03680cf0 to 03780cf3 has its CatchHandler @ 03680d14 */
                    /* try { // try from 03680cf4 to 03780d1b has its CatchHandler @ 03680b64 */
        return iVar3;
      }
                    /* try { // try from 03680cb4 to 03780cb7 has its CatchHandler @ 03680cd8 */
                    /* try { // try from 03680cb8 to 03780cbb has its CatchHandler @ 03680cd0 */
      if ((Nekki_SF2_GUI_Map_MapButton_o *)local_58.fields._current ==
          (Nekki_SF2_GUI_Map_MapButton_o *)0x0) break;
                    /* try { // try from 03680cbc to 03780cbf has its CatchHandler @ 03680ccc */
                    /* try { // try from 03680cc0 to 03780cc3 has its CatchHandler @ 03680cc8 */
      fVar4 = Nekki_SF2_GUI_Map_MapButton__get_RealWidth
                        ((Nekki_SF2_GUI_Map_MapButton_o *)local_58.fields._current,(MethodInfo *)0x0
                        );
                    /* try { // try from 03680cc4 to 03780cef has its CatchHandler @ 03680b64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680cc0 with catch @ 03680cc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680cbc with catch @ 03680ccc
                        */
      if (fVar4 <= *KNBLBCAPOCH) {
        fVar4 = *KNBLBCAPOCH;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680cb8 with catch @ 03680cd0
                        */
      *KNBLBCAPOCH = fVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680c24 with catch @ 03680cd4
                        */
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x3580D74]
// Nekki.SF2.GUI.Dialogs.EventDialog$$GKPJMHOFIOO @ RVA 0x3580D74

void Nekki_SF2_GUI_Dialogs_EventDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_MapButton__o *GAONIMDGFFK;
  System_Collections_Generic_List_MapButton__o *LPEEDKHBKGA;
  NCNJEIBHGBH_o *pNVar3;
  System_Collections_Generic_List_MapButton__o *AGJFKCDJLBE;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar4;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_Map_MapButton_array *pNVar5;
  Nekki_SF2_GUI_Map_MapButton_o **ppNVar6;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04568ccf & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_EventDialog_JOCHGEBKLMM__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MapButton>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568ccf = 1;
  }
  UnityEngine_TransformExtensions__DeleteAllChildrenObjects
            ((UnityEngine_Transform_o *)(__this->fields)._storyParent1,(MethodInfo *)0x0);
  UnityEngine_TransformExtensions__DeleteAllChildrenObjects
            ((UnityEngine_Transform_o *)(__this->fields)._storyParent2,(MethodInfo *)0x0);
  UnityEngine_TransformExtensions__DeleteAllChildrenObjects
            ((UnityEngine_Transform_o *)(__this->fields)._raidParent1,(MethodInfo *)0x0);
  UnityEngine_TransformExtensions__DeleteAllChildrenObjects
            ((UnityEngine_Transform_o *)(__this->fields)._raidParent2,(MethodInfo *)0x0);
  GAONIMDGFFK = (System_Collections_Generic_List_MapButton__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)GAONIMDGFFK,
             Method_System_Collections_Generic_List<MapButton>__ctor__);
  LPEEDKHBKGA = (System_Collections_Generic_List_MapButton__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)LPEEDKHBKGA,
             Method_System_Collections_Generic_List<MapButton>__ctor__);
  pNVar3 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NCNJEIBHGBH_o *)0x0) {
    AGJFKCDJLBE = NCNJEIBHGBH__LLNADPGEEEJ
                            (pNVar3,(__this->fields)._mapButtonPrefab,(MethodInfo *)0x0);
    pNVar3 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar3 != (NCNJEIBHGBH_o *)0x0) {
      pNVar4 = NCNJEIBHGBH__CANNODKGOME(pNVar3,(__this->fields)._mapButtonPrefab,(MethodInfo *)0x0);
      ppNVar6 = &(__this->fields).JDAMBHONLJH;
      *ppNVar6 = pNVar4;
      thunk_FUN_01c20e04(ppNVar6,pNVar4);
      if (*ppNVar6 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
        __this_00 = (UnityEngine_Events_UnityEvent_o *)((*ppNVar6)->fields).super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if ((__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) &&
           (UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0),
           lVar2 = Method_System_Collections_Generic_List<MapButton>_Add__,
           AGJFKCDJLBE != (System_Collections_Generic_List_MapButton__o *)0x0)) {
          pNVar4 = *ppNVar6;
          pNVar5 = (AGJFKCDJLBE->fields)._items;
          (AGJFKCDJLBE->fields)._version = (AGJFKCDJLBE->fields)._version + 1;
          if (pNVar5 != (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
            uVar1 = (AGJFKCDJLBE->fields)._size;
            if (uVar1 < (uint)pNVar5->max_length) {
              (AGJFKCDJLBE->fields)._size = uVar1 + 1;
              pNVar5->m_Items[(int)uVar1] = pNVar4;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)AGJFKCDJLBE,
                         (Il2CppObject *)pNVar4,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            Nekki_SF2_GUI_Dialogs_EventDialog__PJNGIOALGDP
                      (__this,GAONIMDGFFK,LPEEDKHBKGA,AGJFKCDJLBE,in_x4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x358128C]
// Nekki.SF2.GUI.Dialogs.EventDialog$$EJHAPHAHMHG @ RVA 0x358128C

void Nekki_SF2_GUI_Dialogs_EventDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x3581290]
// Nekki.SF2.GUI.Dialogs.EventDialog$$Init @ RVA 0x3581290

void Nekki_SF2_GUI_Dialogs_EventDialog__Init
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  NCNJEIBHGBH_o *pNVar1;
  System_Action_FKNCNNOOOIO__o *pSVar2;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  
                    /* try { // try from 03681290 to 03781297 has its CatchHandler @ 036812b0 */
                    /* try { // try from 03681298 to 0378129b has its CatchHandler @ 036812a8 */
                    /* try { // try from 0368129c to 037812bf has its CatchHandler @ 03681154 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03681260 with catch @ 036812a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03681250 with catch @ 036812a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03681298 with catch @ 036812a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03681210 with catch @ 036812ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03681290 with catch @ 036812b0
                        */
                    /* try { // try from 036812c0 to 037812c3 has its CatchHandler @ 036812e8 */
  if ((DAT_04568cd0 & 1) == 0) {
                    /* try { // try from 036812c4 to 037812ef has its CatchHandler @ 03681154 */
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_EventDialog_AIIOJJEPJMD__);
                    /* catch() { ... } // from try @ 036812c0 with catch @ 036812e8 */
                    /* try { // try from 036812f0 to 037812f7 has its CatchHandler @ 0368130c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_EventDialog_GBODNEDLIDF__);
                    /* try { // try from 036812f8 to 03781303 has its CatchHandler @ 03681154 */
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
                    /* try { // try from 03681304 to 0378130b has its CatchHandler @ 0368130c */
    FUN_01bab630(&StringLiteral_20656/*"salesTitle"*/);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036812f0 with catch @ 0368130c
                       catch(type#2 @ 00000000) { ... } // from try @ 03681304 with catch @ 0368130c
                        */
    FUN_01bab630(&StringLiteral_17301/*"compareCloseBtn"*/);
    DAT_04568cd0 = 1;
  }
  pNVar1 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  pSVar2 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar1 != (NCNJEIBHGBH_o *)0x0) {
    NCNJEIBHGBH__GAOPCGKKBFH(pNVar1,pSVar2,(MethodInfo *)0x0);
    pNVar1 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar2 = (System_Action_FKNCNNOOOIO__o *)thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pNVar1 != (NCNJEIBHGBH_o *)0x0) {
      NCNJEIBHGBH__GLDENAIADCG(pNVar1,pSVar2,(MethodInfo *)0x0);
      pNVar1 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
      pSVar2 = (System_Action_FKNCNNOOOIO__o *)
               thunk_FUN_01bda818(System_Action<FKNCNNOOOIO>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (NCNJEIBHGBH_o *)0x0) {
        NCNJEIBHGBH__OAOEHBBPHND(pNVar1,pSVar2,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
                  ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,StringLiteral_20656/*"salesTitle"*/,
                   StringLiteral_17301/*"compareCloseBtn"*/,StringLiteral_3640/*"CANCEL"*/,1,(MethodInfo *)0x0);
        __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                      thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
        System_Action<Int32Enum>___ctor();
        if (__this_00 != (NDPMLPGANCI_o *)0x0) {
          NDPMLPGANCI__FKFIIDIJIEI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GBODNEDLIDF(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x358147C]
// Nekki.SF2.GUI.Dialogs.EventDialog$$GBODNEDLIDF @ RVA 0x358147C

void Nekki_SF2_GUI_Dialogs_EventDialog__GBODNEDLIDF
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0368148c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,0,(__this->klass->vtable)._13_OnClose.method);
  return;
}


// ===== private void JOCHGEBKLMM()  [RVA 0x3581490]
// Nekki.SF2.GUI.Dialogs.EventDialog$$JOCHGEBKLMM @ RVA 0x3581490

void Nekki_SF2_GUI_Dialogs_EventDialog__JOCHGEBKLMM
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButton_o *__this_00;
  
  __this_00 = (__this->fields).JDAMBHONLJH;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
    Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x35814B0]
// Nekki.SF2.GUI.Dialogs.EventDialog$$IGDDKJJMDLP @ RVA 0x35814B0

void Nekki_SF2_GUI_Dialogs_EventDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected void AIIOJJEPJMD(FKNCNNOOOIO IMMNELPBGIF)  [RVA 0x35814B4]
// Nekki.SF2.GUI.Dialogs.EventDialog$$AIIOJJEPJMD @ RVA 0x35814B4

void Nekki_SF2_GUI_Dialogs_EventDialog__AIIOJJEPJMD
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,FKNCNNOOOIO_o *IMMNELPBGIF,
               MethodInfo *method)

{
  (*(__this->klass->vtable)._32_GKPJMHOFIOO.methodPtr)
            (__this,(__this->klass->vtable)._32_GKPJMHOFIOO.method);
                    /* WARNING: Could not recover jumptable at 0x036814e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._17_GLJGIJNALCA.methodPtr)
            (__this,(__this->klass->vtable)._17_GLJGIJNALCA.method);
  return;
}


// ===== private void KDOMLBPOJNA(List<MapButton> EDEHNHIHDDH, RectTransform DOINNNFBLFB, RectTransform GLOCBPEJDIC, int DMCDIFICIKI, float KNBLBCAPOCH)  [RVA 0x35814E4]
// Nekki.SF2.GUI.Dialogs.EventDialog$$KDOMLBPOJNA @ RVA 0x35814E4

void Nekki_SF2_GUI_Dialogs_EventDialog__KDOMLBPOJNA
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,
               System_Collections_Generic_List_MapButton__o *EDEHNHIHDDH,
               UnityEngine_RectTransform_o *DOINNNFBLFB,UnityEngine_RectTransform_o *GLOCBPEJDIC,
               int32_t DMCDIFICIKI,float KNBLBCAPOCH,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar2;
  UnityEngine_Component_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Nekki_SF2_GUI_Dialogs_EventDialog_o *__this_00;
  Nekki_SF2_GUI_Dialogs_EventDialog_o *__this_01;
  MethodInfo *pMVar6;
  int iVar7;
  int iVar8;
  UnityEngine_Vector2_o UVar9;
  
  if ((DAT_04568cd1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_get_Item__);
    DAT_04568cd1 = 1;
  }
  if ((((DOINNNFBLFB != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)DOINNNFBLFB,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) &&
      (UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0),
      GLOCBPEJDIC != (UnityEngine_RectTransform_o *)0x0)) &&
     ((pUVar1 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)GLOCBPEJDIC,(MethodInfo *)0x0),
      pUVar1 != (UnityEngine_GameObject_o *)0x0 &&
      (UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0),
      EDEHNHIHDDH != (System_Collections_Generic_List_MapButton__o *)0x0)))) {
    if ((EDEHNHIHDDH->fields)._size < 1) {
      return;
    }
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)DOINNNFBLFB,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)GLOCBPEJDIC,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pMVar6 = (MethodInfo *)0x0;
        UnityEngine_GameObject__SetActive
                  (pUVar1,DMCDIFICIKI < (EDEHNHIHDDH->fields)._size,(MethodInfo *)0x0);
        iVar7 = (EDEHNHIHDDH->fields)._size;
        if (DMCDIFICIKI <= iVar7) {
          iVar7 = DMCDIFICIKI;
        }
        if (0 < iVar7) {
          iVar8 = 0;
          do {
            pNVar2 = (Nekki_SF2_GUI_Map_MapButton_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,iVar8,
                                Method_System_Collections_Generic_List<MapButton>_get_Item__);
            if (pNVar2 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03681764;
            Nekki_SF2_GUI_Map_MapButton__set_RealWidth(pNVar2,KNBLBCAPOCH,(MethodInfo *)0x0);
            pUVar3 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,iVar8,
                                Method_System_Collections_Generic_List<MapButton>_get_Item__);
            if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
               (pUVar4 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
               pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03681764;
            pMVar6 = (MethodInfo *)0x0;
            UnityEngine_Transform__SetParent
                      (pUVar4,(UnityEngine_Transform_o *)DOINNNFBLFB,false,(MethodInfo *)0x0);
            iVar8 = iVar8 + 1;
          } while (iVar7 != iVar8);
        }
        pUVar5 = Nekki_SF2_GUI_Dialogs_BaseDialog__get_RectTransform
                           ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_EventDialog__OFAKFHHDEKO
                    (__this_00,DOINNNFBLFB,((float)iVar7 * KNBLBCAPOCH - UVar9.fields.x) * 0.5,
                     pMVar6);
          iVar7 = DMCDIFICIKI;
          if ((EDEHNHIHDDH->fields)._size <= DMCDIFICIKI) {
            return;
          }
          do {
            pNVar2 = (Nekki_SF2_GUI_Map_MapButton_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,iVar7,
                                Method_System_Collections_Generic_List<MapButton>_get_Item__);
            if (pNVar2 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) goto LAB_03681764;
            Nekki_SF2_GUI_Map_MapButton__set_RealWidth(pNVar2,KNBLBCAPOCH,(MethodInfo *)0x0);
            pUVar3 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,iVar7,
                                Method_System_Collections_Generic_List<MapButton>_get_Item__);
            if ((pUVar3 == (UnityEngine_Component_o *)0x0) ||
               (pUVar4 = UnityEngine_Component__get_transform(pUVar3,(MethodInfo *)0x0),
               pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03681764;
            pMVar6 = (MethodInfo *)0x0;
            UnityEngine_Transform__SetParent
                      (pUVar4,(UnityEngine_Transform_o *)GLOCBPEJDIC,false,(MethodInfo *)0x0);
            iVar8 = (EDEHNHIHDDH->fields)._size;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar8);
          pUVar5 = Nekki_SF2_GUI_Dialogs_BaseDialog__get_RectTransform
                             ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
            UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_EventDialog__OFAKFHHDEKO
                      (__this_01,GLOCBPEJDIC,
                       ((float)(iVar8 - DMCDIFICIKI) * KNBLBCAPOCH - UVar9.fields.x) * 0.5,pMVar6);
            return;
          }
        }
      }
    }
  }
LAB_03681764:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x3581828]
// Nekki.SF2.GUI.Dialogs.EventDialog$$GLJGIJNALCA @ RVA 0x3581828

void Nekki_SF2_GUI_Dialogs_EventDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar6;
  float fVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o UVar9;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04568cd2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RectTransform>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RectTransform>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RectTransform>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>__ctor__);
                    /* try { // try from 036818b8 to 03781957 has its CatchHandler @ 036818b8
                       catch() { ... } // from try @ 036818b8 with catch @ 036818b8
                       catch() { ... } // from try @ 03681960 with catch @ 036818b8
                       catch() { ... } // from try @ 036819a8 with catch @ 036818b8
                       catch() { ... } // from try @ 036819cc with catch @ 036818b8
                       catch() { ... } // from try @ 03681a0c with catch @ 036818b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<RectTransform>_TypeInfo);
    DAT_04568cd2 = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RectTransform>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<RectTransform>__ctor__);
  pUVar4 = (__this->fields)._storyParent1;
  if ((pUVar4 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03681bd4;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
  if (bVar3) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03681bd4;
    pUVar4 = (__this->fields)._storyParent1;
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03681bd4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pUVar4;
      thunk_FUN_01c20e04();
                    /* try { // try from 03681958 to 0378195f has its CatchHandler @ 036819b0 */
    }
    else {
                    /* try { // try from 03681960 to 037819a3 has its CatchHandler @ 036818b8 */
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pUVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pUVar4 = (__this->fields)._storyParent2;
  if ((pUVar4 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03681bd4;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
  if (bVar3) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03681bd4;
    pUVar4 = (__this->fields)._storyParent2;
                    /* try { // try from 036819a4 to 037819a7 has its CatchHandler @ 036819ac */
    pSVar6 = (__this_00->fields)._items;
                    /* try { // try from 036819a8 to 037819c7 has its CatchHandler @ 036818b8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036819a4 with catch @ 036819ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03681958 with catch @ 036819b0
                        */
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03681bd4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
                    /* try { // try from 036819c8 to 037819cb has its CatchHandler @ 036819f4 */
                    /* try { // try from 036819cc to 03781a03 has its CatchHandler @ 036818b8 */
      (__this_00->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pUVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pUVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* catch() { ... } // from try @ 036819c8 with catch @ 036819f4 */
  pUVar4 = (__this->fields)._raidParent1;
                    /* try { // try from 03681a04 to 03781a0b has its CatchHandler @ 03681a20 */
  if ((pUVar4 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03681bd4;
                    /* try { // try from 03681a0c to 03781a17 has its CatchHandler @ 036818b8 */
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
  if (bVar3) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03681bd4;
                    /* try { // try from 03681a18 to 03781a1f has its CatchHandler @ 03681a20 */
    pUVar4 = (__this->fields)._raidParent1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03681a04 with catch @ 03681a20
                       catch(type#2 @ 00000000) { ... } // from try @ 03681a18 with catch @ 03681a20
                        */
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03681bd4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pUVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pUVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pUVar4 = (__this->fields)._raidParent2;
  if ((pUVar4 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03681bd4;
  bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
  if (bVar3) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03681bd4;
    pUVar4 = (__this->fields)._raidParent2;
    pSVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_03681bd4;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)pUVar4;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pUVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pUVar5 = (__this->fields).super._content;
  if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar5,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
     pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar8 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._innerStripe;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 03681b5c to 03781bf7 has its CatchHandler @ 03681b5c
                       catch() { ... } // from try @ 03681b5c with catch @ 03681b5c
                       catch() { ... } // from try @ 03681c00 with catch @ 03681b5c
                       catch() { ... } // from try @ 03681c40 with catch @ 03681b5c
                       catch() { ... } // from try @ 03681c64 with catch @ 03681b5c
                       catch() { ... } // from try @ 03681ca4 with catch @ 03681b5c */
        fVar7 = (UVar8.fields.y - UVar9.fields.y) / (float)(__this_00->fields)._size;
        if (300.0 < fVar7) {
          fVar7 = 300.0;
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_58,__this_00,
                   Method_System_Collections_Generic_List<RectTransform>_GetEnumerator__);
        while( true ) {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_58,
                             Method_System_Collections_Generic_List_Enumerator<RectTransform>_MoveNext__
                            );
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<RectTransform>_Dispose__);
            return;
          }
          if ((UnityEngine_RectTransform_o *)local_58.fields._current ==
              (UnityEngine_RectTransform_o *)0x0) break;
          UVar9.fields.x = UVar8.fields.x;
          UVar9.fields.y = fVar7;
          UnityEngine_RectTransform__set_sizeDelta
                    ((UnityEngine_RectTransform_o *)local_58.fields._current,UVar9,(MethodInfo *)0x0
                    );
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
LAB_03681bd4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void PJNGIOALGDP(List<MapButton> GAONIMDGFFK, List<MapButton> LPEEDKHBKGA, List<MapButton> AGJFKCDJLBE)  [RVA 0x3580F60]
// Nekki.SF2.GUI.Dialogs.EventDialog$$PJNGIOALGDP @ RVA 0x3580F60

void Nekki_SF2_GUI_Dialogs_EventDialog__PJNGIOALGDP
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,
               System_Collections_Generic_List_MapButton__o *GAONIMDGFFK,
               System_Collections_Generic_List_MapButton__o *LPEEDKHBKGA,
               System_Collections_Generic_List_MapButton__o *AGJFKCDJLBE,MethodInfo *method)

{
  System_Collections_Generic_List_MapButton__o *__this_00;
  uint DMCDIFICIKI;
  long lVar1;
  Il2CppObject *item;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  Nekki_SF2_GUI_Dialogs_EventDialog_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  FKNCNNOOOIO_o *pFVar7;
  Nekki_SF2_GUI_Map_MapButton_array *pNVar8;
  uint uVar9;
  float KNBLBCAPOCH;
  float KNBLBCAPOCH_00;
  float fVar10;
  float x;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  float local_68 [2];
  
  method_00 = (MethodInfo *)AGJFKCDJLBE;
  if ((DAT_04568cd3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_get_Count__);
    DAT_04568cd3 = 1;
  }
  local_80.fields._current = (Il2CppObject *)0x0;
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  if (AGJFKCDJLBE != (System_Collections_Generic_List_MapButton__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)AGJFKCDJLBE,
               Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__
                             ), item = local_80.fields._current, bVar2) {
      if ((Nekki_SF2_GUI_Map_MapButton_o *)local_80.fields._current ==
          (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_80.fields._current,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
      lVar1 = Method_System_Collections_Generic_List<MapButton>_Add__;
      pFVar7 = ((Nekki_SF2_GUI_Map_MapButton_Fields *)((long)item + 0x10))->AEPNEAIEKOL;
      if (pFVar7 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = GAONIMDGFFK;
      if (1 < (uint)(pFVar7->fields).AIDMEFDEOLJ) {
        __this_00 = LPEEDKHBKGA;
      }
      if (__this_00 == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pNVar8 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar8 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar9 = (__this_00->fields)._size;
      if (uVar9 < (uint)pNVar8->max_length) {
        (__this_00->fields)._size = uVar9 + 1;
        pNVar8->m_Items[(int)uVar9] = (Nekki_SF2_GUI_Map_MapButton_o *)item;
        thunk_FUN_01c20e04(pNVar8->m_Items + (int)uVar9,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    pUVar6 = (__this->fields)._innerStripe;
    if (((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
        (pUVar5 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
        LPEEDKHBKGA != (System_Collections_Generic_List_MapButton__o *)0x0)) &&
       (pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar5,0 < (LPEEDKHBKGA->fields)._size,(MethodInfo *)0x0);
      uVar3 = Nekki_SF2_GUI_Dialogs_EventDialog__EEHJPNCNNGP
                        (__this_01,GAONIMDGFFK,local_68 + 1,method_00);
      uVar4 = Nekki_SF2_GUI_Dialogs_EventDialog__EEHJPNCNNGP
                        ((Nekki_SF2_GUI_Dialogs_EventDialog_o *)(ulong)uVar3,LPEEDKHBKGA,local_68,
                         method_00);
      uVar9 = uVar3;
      if ((int)uVar3 <= (int)uVar4) {
        uVar9 = uVar4;
      }
      KNBLBCAPOCH_00 = local_68[1];
      if (local_68[1] <= local_68[0]) {
        KNBLBCAPOCH_00 = local_68[0];
      }
                    /* try { // try from 03681154 to 0378120f has its CatchHandler @ 03681154
                       catch() { ... } // from try @ 03681154 with catch @ 03681154
                       catch() { ... } // from try @ 0368126c with catch @ 03681154
                       catch() { ... } // from try @ 0368129c with catch @ 03681154
                       catch() { ... } // from try @ 036812c4 with catch @ 03681154
                       catch() { ... } // from try @ 036812f8 with catch @ 03681154 */
      fVar10 = KNBLBCAPOCH_00 * (float)(int)uVar9;
      KNBLBCAPOCH = KNBLBCAPOCH_00;
      x = fVar10;
      DMCDIFICIKI = uVar9;
      if (1850.0 < fVar10) {
        x = local_68[1] * (float)(int)uVar3;
        fVar10 = local_68[0] * (float)(int)uVar4;
        KNBLBCAPOCH_00 = local_68[1];
        KNBLBCAPOCH = local_68[0];
        uVar9 = uVar4;
        DMCDIFICIKI = uVar3;
      }
      pUVar6 = Nekki_SF2_GUI_Dialogs_BaseDialog__get_RectTransform
                         ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
      if (x <= fVar10) {
        x = fVar10;
      }
      UnityEngine_TransformExtensions__SetSizeDeltaX(pUVar6,x,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_EventDialog__KDOMLBPOJNA
                (__this,GAONIMDGFFK,(__this->fields)._storyParent1,(__this->fields)._storyParent2,
                 DMCDIFICIKI,KNBLBCAPOCH_00,in_x5);
      Nekki_SF2_GUI_Dialogs_EventDialog__KDOMLBPOJNA
                (__this,LPEEDKHBKGA,(__this->fields)._raidParent1,(__this->fields)._raidParent2,
                 uVar9,KNBLBCAPOCH,in_x5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OFAKFHHDEKO(RectTransform JDEFJPHCNMM, float GCDIOJKMKIN)  [RVA 0x3581768]
// Nekki.SF2.GUI.Dialogs.EventDialog$$OFAKFHHDEKO @ RVA 0x3581768

void Nekki_SF2_GUI_Dialogs_EventDialog__OFAKFHHDEKO
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,UnityEngine_RectTransform_o *JDEFJPHCNMM
               ,float GCDIOJKMKIN,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  
  if ((DAT_04568cd4 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<HorizontalLayoutGroup>__);
    __this = (Nekki_SF2_GUI_Dialogs_EventDialog_o *)FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cd4 = 1;
  }
  if (JDEFJPHCNMM != (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)JDEFJPHCNMM,
                           Method_UnityEngine_Component_GetComponent<HorizontalLayoutGroup>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this = (Nekki_SF2_GUI_Dialogs_EventDialog_o *)0x0;
    if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                (__this_00,GCDIOJKMKIN,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

