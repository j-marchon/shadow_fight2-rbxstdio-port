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

