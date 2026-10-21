// Original name: Nekki.SF2.GUI.Map.MapButtonController  (obfuscated NCNJEIBHGBH)
// TypeDefIndex 2239
// Namespace: 
// public class MapButtonController
// Fields:
//   private Action<FKNCNNOOOIO> HKBOCMKKIOI; // 0x10
//   private Action<FKNCNNOOOIO> KLCCBGKNCBD; // 0x18
//   private Action<FKNCNNOOOIO> ILGDOLCMDHA; // 0x20
//   private Action<string> FBENJEIDACA; // 0x28
//   private Action<string> BKGHBFHIPHK; // 0x30
//   private static MapButtonController KNOHKIKFEBL; // 0x0
//   private XmlNode DMLGJFCNNJF; // 0x38
//   private List<FKNCNNOOOIO> JODEDMLAIEG; // 0x40
//   private LIDDCJFOOOI GNMGOPAABKE; // 0x48
//   private LIDDCJFOOOI PFBKEFOBEDB; // 0x50
//   private List<string> DMLKGAKPCAB; // 0x58
//   private List<string> PAFEHLCLKEC; // 0x60
//   private Dictionary<string, int> CJKAPEOHOLL; // 0x68
//   private StringBuilder LJLADKMLDEF; // 0x70

// ===== private void KKKGNGNJGCA(FKNCNNOOOIO MLKMGKNNNML)  [RVA 0x32F0D68]
// MapButtonController$$KKKGNGNJGCA @ RVA 0x32F0D68

void MapButtonController__KKKGNGNJGCA(MapButtonController_o *__this,FKNCNNOOOIO_o *MLKMGKNNNML,MethodInfo *method)

{
  if (MLKMGKNNNML != (FKNCNNOOOIO_o *)0x0) {
                    /* try { // try from 033f0d74 to 034f0d7b has its CatchHandler @ 033f1e8c */
    MapButtonController__KKKGNGNJGCA(__this,(MLKMGKNNNML->fields).JIJLBFGKNJK,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<FKNCNNOOOIO> LFPJPIDMDPF()  [RVA 0x32F0EE0]
// MapButtonController$$LFPJPIDMDPF @ RVA 0x32F0EE0

System_Collections_Generic_List_FKNCNNOOOIO__o *
MapButtonController__LFPJPIDMDPF(MapButtonController_o *__this,MethodInfo *method)

{
  System_Predicate_FKNCNNOOOIO__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar2;
  System_Predicate_FKNCNNOOOIO__o *match;
  
                    /* try { // try from 033f0ee4 to 034f0ef3 has its CatchHandler @ 033f1ed0 */
                    /* try { // try from 033f0f00 to 034f0f0b has its CatchHandler @ 033f1ec8 */
  if ((DAT_0456766e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_FindAll__);
                    /* try { // try from 033f0f18 to 034f0f27 has its CatchHandler @ 033f1e74 */
    FUN_01bab630(&System_Predicate<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&Method_NCNJEIBHGBH_<>c_DAMGDLNEEAF__);
    FUN_01bab630(&MapButtonController_<>c_TypeInfo);
                    /* try { // try from 033f0f38 to 034f0f3f has its CatchHandler @ 033f1f1c */
    DAT_0456766e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033f0f40 to 034f1737 has its CatchHandler @ 033ef1b0 */
  pSVar2 = (__this->fields).JODEDMLAIEG;
  if ((MapButtonController_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MapButtonController_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = MapButtonController_<>c_TypeInfo->static_fields->__9__26_0;
  if (match == (System_Predicate_FKNCNNOOOIO__o *)0x0) {
    if ((MapButtonController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MapButtonController_<>c_TypeInfo,method);
    }
    match = (System_Predicate_FKNCNNOOOIO__o *)
            thunk_FUN_01bda818(System_Predicate<FKNCNNOOOIO>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &MapButtonController_<>c_TypeInfo->static_fields->__9__26_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (pSVar2 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
    pSVar2 = (System_Collections_Generic_List_FKNCNNOOOIO__o *)
             System_Collections_Generic_List<object>__FindAll
                       ((System_Collections_Generic_List_object__o *)pSVar2,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<FKNCNNOOOIO>_FindAll__);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public MapButton PMGKLOAHCJE(GameObject KCAHJMFOIAG)  [RVA 0x32F0FE4]
// MapButtonController$$PMGKLOAHCJE @ RVA 0x32F0FE4

Nekki_SF2_GUI_Map_MapButton_o *
MapButtonController__PMGKLOAHCJE
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButton_o *pNVar1;
  
  pNVar1 = (Nekki_SF2_GUI_Map_MapButton_o *)FUN_03f93a10(DAT_0456766f);
  return pNVar1;
}


// ===== public void DPBCMGAOJOP(Action<FKNCNNOOOIO> CJNHFNHJHPE)  [RVA 0x32F1184]
// MapButtonController$$DPBCMGAOJOP @ RVA 0x32F1184

void MapButtonController__DPBCMGAOJOP
               (MapButtonController_o *__this,System_Action_FKNCNNOOOIO__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FKNCNNOOOIO__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FKNCNNOOOIO__o *pSVar5;
  System_Action_FKNCNNOOOIO__o **ppSVar6;
  System_Action_FKNCNNOOOIO__o *source;
  
  if ((DAT_04567670 & 1) == 0) {
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    DAT_04567670 = 1;
  }
  ppSVar6 = &(__this->fields).ILGDOLCMDHA;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FKNCNNOOOIO>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FKNCNNOOOIO>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FKNCNNOOOIO__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void PEABBFJGFKC(int OGPGLGPMEPD)  [RVA 0x32F1234]
// MapButtonController$$PEABBFJGFKC @ RVA 0x32F1234

void MapButtonController__PEABBFJGFKC(MapButtonController_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  MapButtonController_o *__this_00;
  MapButtonController_o *BGCBJECODII;
  
  if ((DAT_04567671 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567671 = 1;
  }
  __this_00 = (MapButtonController_o *)(__this->fields).PAFEHLCLKEC;
  if (__this_00 == (MapButtonController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  BGCBJECODII = StringLiteral_1/*""*/;
  if (OGPGLGPMEPD < *(int *)&(__this_00->fields).KLCCBGKNCBD) {
    method = Method_System_Collections_Generic_List<string>_get_Item__;
    __this_00 = (MapButtonController_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,OGPGLGPMEPD,
                           (MethodInfo_26E4ADC *)
                           Method_System_Collections_Generic_List<string>_get_Item__);
    BGCBJECODII = __this_00;
  }
  MapButtonController__PEABBFJGFKC(__this_00,(System_String_o *)BGCBJECODII,method);
  return;
}


// ===== private void KKKGNGNJGCA(string AFKICLAFDKC)  [RVA 0x32F0D80]
// MapButtonController$$KKKGNGNJGCA @ RVA 0x32F0D80

void MapButtonController__KKKGNGNJGCA(MapButtonController_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  Roster_o *__this_00;
  
                    /* try { // try from 033f0d80 to 034f0d87 has its CatchHandler @ 033f1e88 */
                    /* try { // try from 033f0d98 to 034f0d9f has its CatchHandler @ 033f1ea4 */
  if ((DAT_04567672 & 1) == 0) {
                    /* try { // try from 033f0db0 to 034f0db7 has its CatchHandler @ 033f1e94 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 033f0dbc to 034f0dc3 has its CatchHandler @ 033f1ea0 */
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_3606/*"Button"*/);
                    /* try { // try from 033f0dd4 to 034f0ddb has its CatchHandler @ 033f1e9c */
    DAT_04567672 = 1;
  }
                    /* try { // try from 033f0df0 to 034f0e13 has its CatchHandler @ 033f1ee8 */
  pSVar1 = EIABCPKDEBD__MHJPHEMBOLK
                     ((__this->fields).DMLGJFCNNJF,StringLiteral_3606/*"Button"*/,StringLiteral_9327/*"Name"*/,AFKICLAFDKC
                      ,(MethodInfo *)0x0);
  if (pSVar1 == (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 033f0ed8 to 034f0ee3 has its CatchHandler @ 033f1e7c */
    return;
  }
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
              (pSVar2,pSVar1,(pSVar2->klass->vtable)._25_RemoveChild.method);
                    /* try { // try from 033f0e20 to 034f0e77 has its CatchHandler @ 033f1f40 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 033f0e84 to 034f0e8b has its CatchHandler @ 033f1ed8 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033f0ea8 to 034f0eaf has its CatchHandler @ 033f1ec4 */
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MapButton JFIJFIEOGIC(GameObject IHFPOLHPMGF, FKNCNNOOOIO BMINOMGENHE, bool KJCOGEKPFIB)  [RVA 0x32F14F4]
// MapButtonController$$JFIJFIEOGIC @ RVA 0x32F14F4

Nekki_SF2_GUI_Map_MapButton_o *
MapButtonController__JFIJFIEOGIC
          (MapButtonController_o *__this,UnityEngine_GameObject_o *IHFPOLHPMGF,FKNCNNOOOIO_o *BMINOMGENHE,
          bool KJCOGEKPFIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar3;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_Map_MapButton_o *__this_03;
  LIDDCJFOOOI_o *__this_04;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar4;
  undefined4 uVar5;
  System_String_array *pSVar6;
  UnityEngine_Events_UnityEvent_o *__this_05;
  Il2CppObject *pIVar7;
  Il2CppType *pIVar8;
  
  if ((DAT_04567673 & 1) == 0) {
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&Method_NCNJEIBHGBH_HMOEKKDONEJ_MBKKOHBPJLG__);
    FUN_01bab630(&Method_NCNJEIBHGBH_HMOEKKDONEJ_PPKOFLOMCOO__);
    FUN_01bab630(&MapButtonController_HMOEKKDONEJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12931/*"Textures/buttons/map/"*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04567673 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(MapButtonController_HMOEKKDONEJ_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    pIVar3 = (Il2CppClass *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
    FKNCNNOOOIO___ctor((FKNCNNOOOIO_o *)pIVar3,BMINOMGENHE,(MethodInfo *)0x0);
    pIVar7 = __this_00 + 2;
    pIVar7->klass = pIVar3;
    thunk_FUN_01c20e04(pIVar7,pIVar3);
    pIVar3 = pIVar7->klass;
    *(undefined4 *)&__this_00[1].monitor = 0;
    if (pIVar3 != (Il2CppClass *)0x0) {
      if (*(char *)&(pIVar3->_1).typeMetadataHandle == '\0') {
        __this_01 = (__this->fields).DMLKGAKPCAB;
      }
      else {
        __this_01 = (__this->fields).PAFEHLCLKEC;
      }
      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
        uVar1 = (__this_01->fields)._size;
        *(uint *)&__this_00[1].monitor = uVar1;
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar4 = (System_String_o *)(pIVar3->_1).name;
        pSVar6 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar6 != (System_String_array *)0x0) {
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = pSVar4;
            thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar4
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pIVar3 = pIVar7->klass;
          if (pIVar3 != (Il2CppClass *)0x0) {
            if ((pIVar3->_1).this_arg.bits == 1) {
              pIVar8 = &(pIVar3->_1).this_arg;
              pSVar4 = System_String__Concat
                                 (StringLiteral_12931/*"Textures/buttons/map/"*/,pIVar8->data,StringLiteral_1492/*"/"*/,
                                  (MethodInfo *)0x0);
              pIVar8->data = pSVar4;
              thunk_FUN_01c20e04(pIVar8,pSVar4);
              pIVar3 = pIVar7->klass;
              if (pIVar3 == (Il2CppClass *)0x0) goto LAB_033f1810;
            }
            uVar5 = 1;
            if (!KJCOGEKPFIB) {
              uVar5 = 2;
            }
            *(undefined4 *)((long)&(pIVar3->_1).interopData + 4) = uVar5;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_02 = (UnityEngine_GameObject_o *)
                        UnityEngine_Object__Instantiate<object>
                                  ((Il2CppObject *)IHFPOLHPMGF,
                                   Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 033f1738 to 034f175f has its CatchHandler @ 033f1f9c */
            if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
               (__this_03 = (Nekki_SF2_GUI_Map_MapButton_o *)
                            UnityEngine_GameObject__GetComponent<object>
                                      (__this_02,
                                       Method_UnityEngine_GameObject_GetComponent<MapButton>__),
               __this_03 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0)) {
              Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo
                        (__this_03,(FKNCNNOOOIO_o *)pIVar7->klass,(MethodInfo *)0x0);
              if (pIVar7->klass != (Il2CppClass *)0x0) {
                if (*(char *)&(pIVar7->klass->_1).typeMetadataHandle != '\0') {
                  if (KJCOGEKPFIB) {
                    __this_04 = (__this->fields).GNMGOPAABKE;
                  }
                  else {
                    __this_04 = (__this->fields).PFBKEFOBEDB;
                  }
                  if (__this_04 == (LIDDCJFOOOI_o *)0x0) goto LAB_033f1810;
                  LIDDCJFOOOI__GFECOLFOILC(__this_04,__this_03,true,(MethodInfo *)0x0);
                }
                    /* try { // try from 033f1794 to 034f17bf has its CatchHandler @ 033f1f98 */
                if (pIVar7->klass != (Il2CppClass *)0x0) {
                  __this_05 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).super.m_OnClick
                  ;
                  call = (UnityEngine_Events_UnityAction_o *)
                         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
                    /* try { // try from 033f1800 to 034f1807 has its CatchHandler @ 033f1f80 */
                    return __this_03;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_033f1810:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f1810 to 034f1817 has its CatchHandler @ 033f1f6c */
  FUN_01bab8c8();
}


// ===== private void OANGGKCBAOJ(string BGCBJECODII)  [RVA 0x32F181C]
// MapButtonController$$OANGGKCBAOJ @ RVA 0x32F181C

void MapButtonController__OANGGKCBAOJ(MapButtonController_o *__this,System_String_o *BGCBJECODII,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  PKHMIGFEJCL_o *pPVar2;
  System_String_o **ppSVar3;
  System_Action_string__o *pSVar4;
  
                    /* try { // try from 033f181c to 034f183f has its CatchHandler @ 033f1f90 */
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar2 = (pNVar1->fields).QuestParameters, pPVar2 != (PKHMIGFEJCL_o *)0x0)) {
    ppSVar3 = &(pPVar2->fields).GLKBIGJCDIP;
    *ppSVar3 = BGCBJECODII;
    thunk_FUN_01c20e04(ppSVar3,BGCBJECODII);
    pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 033f1858 to 034f1863 has its CatchHandler @ 033f1f7c */
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar1,0x19,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).FBENJEIDACA;
      if (pSVar4 != (System_Action_string__o *)0x0) {
                    /* try { // try from 033f1878 to 034f187f has its CatchHandler @ 033f1f50 */
                    /* WARNING: Could not recover jumptable at 0x033f1884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,BGCBJECODII,
                   (pSVar4->fields).super.super.method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private FKNCNNOOOIO LAAGFLEJBGP(XmlNode AHDGNOJPPIB)  [RVA 0x32F1898]
// MapButtonController$$LAAGFLEJBGP @ RVA 0x32F1898

FKNCNNOOOIO_o *
MapButtonController__LAAGFLEJBGP(MapButtonController_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  FKNCNNOOOIO_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  JOCNCPCOEAC_o *pJVar6;
  JOCNCPCOEAC_o **ppJVar7;
  Item_o *__this_01;
  HOOAAGABMBL_o *pHVar8;
  MethodInfo *method_00;
  float fVar9;
  float fVar10;
  
                    /* try { // try from 033f189c to 034f18a3 has its CatchHandler @ 033f1f0c */
  if ((DAT_04567674 & 1) == 0) {
                    /* try { // try from 033f18c0 to 034f18c7 has its CatchHandler @ 033f1e80 */
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FBBNEILNOKK>__);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FKNCNNOOOIO_GLHPADHBDEL>__);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FKNCNNOOOIO_HMFAPGCJJLL>__);
                    /* try { // try from 033f18e4 to 034f18eb has its CatchHandler @ 033f1ef4 */
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&JOCNCPCOEAC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 033f1908 to 034f190f has its CatchHandler @ 033f1ef8 */
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 033f1914 to 034f1923 has its CatchHandler @ 033f1ef0 */
    FUN_01bab630(&StringLiteral_13814/*"Timer"*/);
                    /* try { // try from 033f1928 to 034f1937 has its CatchHandler @ 033f1efc */
    FUN_01bab630(&StringLiteral_2944/*"AnchorMaxX"*/);
    FUN_01bab630(&StringLiteral_7347/*"ImageScale"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 033f1948 to 034f194f has its CatchHandler @ 033f1f08 */
    FUN_01bab630(&StringLiteral_12292/*"Speed"*/);
    FUN_01bab630(&StringLiteral_12118/*"ShowType"*/);
                    /* try { // try from 033f1960 to 034f1967 has its CatchHandler @ 033f1f20 */
    FUN_01bab630(&StringLiteral_2946/*"AnchorMinX"*/);
    FUN_01bab630(&StringLiteral_2945/*"AnchorMaxY"*/);
                    /* try { // try from 033f197c to 034f199f has its CatchHandler @ 033f1f48 */
    FUN_01bab630(&StringLiteral_8823/*"MapButtonImage"*/);
    FUN_01bab630(&StringLiteral_10279/*"PivotY"*/);
    FUN_01bab630(&StringLiteral_4665/*"Control"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_10182/*"Pause"*/);
                    /* try { // try from 033f19b0 to 034f1a07 has its CatchHandler @ 033f1f84 */
    FUN_01bab630(&StringLiteral_10278/*"PivotX"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_7344/*"ImagePath"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_2947/*"AnchorMinY"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
                    /* try { // try from 033f1a08 to 034f1d3f has its CatchHandler @ 033ef1b0 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567674 = 1;
  }
  __this_00 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
  FKNCNNOOOIO___ctor(__this_00,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (__this_00 != (FKNCNNOOOIO_o *)0x0) {
        (__this_00->fields).JIJLBFGKNJK = pSVar5;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
          pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this_00->fields).KPDPJONADPJ = pSVar5;
          thunk_FUN_01c20e04();
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_13814/*"Timer"*/,(MethodInfo *)0x0);
            pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar4,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            (__this_00->fields).AOOKMODPLGM = pSVar5;
            thunk_FUN_01c20e04();
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_7344/*"ImagePath"*/,(MethodInfo *)0x0);
              pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
              (__this_00->fields).MEONABNPAPF = pSVar5;
              thunk_FUN_01c20e04();
              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar3,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                                  (pSVar4,0,
                                   Method_EIABCPKDEBD_CKHGJBKDIID<FKNCNNOOOIO_GLHPADHBDEL>__);
                (__this_00->fields).BGHFADDGPAD = iVar2;
                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar3,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
                  fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar3,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
                    fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                    (__this_00->fields).BEKOHBPEEKP.fields.x = fVar9;
                    (__this_00->fields).BEKOHBPEEKP.fields.y = fVar10;
                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar3,StringLiteral_2946/*"AnchorMinX"*/,(MethodInfo *)0x0);
                      fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar3,StringLiteral_2947/*"AnchorMinY"*/,(MethodInfo *)0x0);
                        fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                        (__this_00->fields).FKICEICKCOG.fields.x = fVar9;
                        (__this_00->fields).FKICEICKCOG.fields.y = fVar10;
                        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar3,StringLiteral_2944/*"AnchorMaxX"*/,(MethodInfo *)0x0);
                          fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar3,StringLiteral_2945/*"AnchorMaxY"*/,(MethodInfo *)0x0);
                            fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                            (__this_00->fields).CCEKJNEFJKP.fields.x = fVar9;
                            (__this_00->fields).CCEKJNEFJKP.fields.y = fVar10;
                            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                               (AHDGNOJPPIB,
                                                (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                method);
                            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 033f1d40 to 034f1d43 has its CatchHandler @ 033f22c4 */
                              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                 (pSVar3,StringLiteral_10278/*"PivotX"*/,(MethodInfo *)0x0);
                    /* try { // try from 033f1d44 to 034f1d47 has its CatchHandler @ 033f22c0 */
                    /* try { // try from 033f1d48 to 034f1d4f has its CatchHandler @ 033f21e4 */
                              fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.5,(MethodInfo *)0x0);
                    /* try { // try from 033f1d50 to 034f1d53 has its CatchHandler @ 033f21d4 */
                    /* try { // try from 033f1d54 to 034f1d57 has its CatchHandler @ 033f21d0 */
                    /* try { // try from 033f1d58 to 034f1d5b has its CatchHandler @ 033f21cc */
                    /* try { // try from 033f1d5c to 034f1d5f has its CatchHandler @ 033f21c8 */
                    /* try { // try from 033f1d60 to 034f1d63 has its CatchHandler @ 033f21ac */
                    /* try { // try from 033f1d64 to 034f1d6b has its CatchHandler @ 033f2330 */
                              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (AHDGNOJPPIB,
                                                  (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                  method);
                              if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 033f1d6c to 034f1d6f has its CatchHandler @ 033f21a8 */
                    /* try { // try from 033f1d70 to 034f1d77 has its CatchHandler @ 033f218c */
                    /* try { // try from 033f1d78 to 034f1d7b has its CatchHandler @ 033f2188 */
                    /* try { // try from 033f1d7c to 034f1d7f has its CatchHandler @ 033f217c */
                                pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                   (pSVar3,StringLiteral_10279/*"PivotY"*/,(MethodInfo *)0x0);
                    /* try { // try from 033f1d80 to 034f1d83 has its CatchHandler @ 033f2174 */
                    /* try { // try from 033f1d84 to 034f1d87 has its CatchHandler @ 033f2170 */
                    /* try { // try from 033f1d88 to 034f1d8b has its CatchHandler @ 033f216c */
                                fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.5,(MethodInfo *)0x0);
                    /* try { // try from 033f1d8c to 034f1d8f has its CatchHandler @ 033f2168 */
                                (__this_00->fields).LNBKBMNLJNG.fields.x = fVar9;
                                (__this_00->fields).LNBKBMNLJNG.fields.y = fVar10;
                    /* try { // try from 033f1d90 to 034f1d97 has its CatchHandler @ 033f21f0 */
                    /* try { // try from 033f1d98 to 034f1d9b has its CatchHandler @ 033f2148 */
                    /* try { // try from 033f1d9c to 034f1d9f has its CatchHandler @ 033f2130 */
                    /* try { // try from 033f1da0 to 034f1da3 has its CatchHandler @ 033f2070 */
                                pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr
                                         )(AHDGNOJPPIB,
                                           (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 033f1da4 to 034f1da7 has its CatchHandler @ 033f2068 */
                                if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 033f1da8 to 034f1daf has its CatchHandler @ 033f1fa0 */
                    /* try { // try from 033f1db0 to 034f1db7 has its CatchHandler @ 033f1f94 */
                                  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                     (pSVar3,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
                                  if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 033f1de8 to 034f1deb has its CatchHandler @ 033f1edc */
                                    bVar1 = true;
                                  }
                                  else {
                    /* try { // try from 033f1db8 to 034f1dbb has its CatchHandler @ 033f1f78 */
                    /* try { // try from 033f1dbc to 034f1dbf has its CatchHandler @ 033f1f74 */
                    /* try { // try from 033f1dc0 to 034f1dc3 has its CatchHandler @ 033f1f70 */
                    /* try { // try from 033f1dc4 to 034f1dc7 has its CatchHandler @ 033f1f60 */
                    /* try { // try from 033f1dc8 to 034f1dcb has its CatchHandler @ 033f1f5c */
                                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                               methodPtr)(AHDGNOJPPIB,
                                                          (AHDGNOJPPIB->klass->vtable).
                                                          _16_get_Attributes.method);
                    /* try { // try from 033f1dcc to 034f1dcf has its CatchHandler @ 033f1f4c */
                                    if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)
                                    goto LAB_033f2070;
                    /* try { // try from 033f1dd0 to 034f1dd3 has its CatchHandler @ 033f1f38 */
                    /* try { // try from 033f1dd4 to 034f1dd7 has its CatchHandler @ 033f1f2c */
                    /* try { // try from 033f1dd8 to 034f1ddb has its CatchHandler @ 033f1f68 */
                                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                       (pSVar3,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0
                                                       );
                    /* try { // try from 033f1ddc to 034f1ddf has its CatchHandler @ 033f1f44 */
                                    bVar1 = pSVar4 == (System_Xml_XmlAttribute_o *)0x0;
                    /* try { // try from 033f1de0 to 034f1de3 has its CatchHandler @ 033f1f68 */
                    /* try { // try from 033f1de4 to 034f1de7 has its CatchHandler @ 033f1f18 */
                                  }
                    /* try { // try from 033f1dec to 034f1df7 has its CatchHandler @ 033f1f68 */
                                  (__this_00->fields).OEFBIKEMBOF = bVar1;
                    /* try { // try from 033f1df8 to 034f1e03 has its CatchHandler @ 033f1f44 */
                                  pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                             methodPtr)(AHDGNOJPPIB,
                                                        (AHDGNOJPPIB->klass->vtable).
                                                        _16_get_Attributes.method);
                    /* try { // try from 033f1e04 to 034f1e0b has its CatchHandler @ 033ef1b0 */
                                  if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 033f1e0c to 034f1e0f has its CatchHandler @ 033f1ed4 */
                    /* try { // try from 033f1e10 to 034f1e13 has its CatchHandler @ 033f1f10 */
                    /* try { // try from 033f1e14 to 034f1e17 has its CatchHandler @ 033f1ecc */
                    /* try { // try from 033f1e18 to 034f1e1b has its CatchHandler @ 033f1f10 */
                                    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                       (pSVar3,StringLiteral_12292/*"Speed"*/,(MethodInfo *)0x0
                                                       );
                    /* try { // try from 033f1e1c to 034f1e1f has its CatchHandler @ 033f1eb8 */
                    /* try { // try from 033f1e20 to 034f1e23 has its CatchHandler @ 033f1f24 */
                    /* try { // try from 033f1e24 to 034f1e27 has its CatchHandler @ 033f1eec */
                                    fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0);
                    /* try { // try from 033f1e28 to 034f1e2b has its CatchHandler @ 033f1f24 */
                                    (__this_00->fields).FMAIEIJAFPA = fVar9;
                    /* try { // try from 033f1e2c to 034f1e2f has its CatchHandler @ 033f1e98 */
                    /* try { // try from 033f1e30 to 034f1e33 has its CatchHandler @ 033f1e90 */
                    /* try { // try from 033f1e34 to 034f1e37 has its CatchHandler @ 033f1e84 */
                    /* try { // try from 033f1e38 to 034f1e3b has its CatchHandler @ 033f1e78 */
                    /* try { // try from 033f1e3c to 034f1e47 has its CatchHandler @ 033f1eec */
                                    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                               methodPtr)(AHDGNOJPPIB,
                                                          (AHDGNOJPPIB->klass->vtable).
                                                          _16_get_Attributes.method);
                                    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 033f1e48 to 034f1e53 has its CatchHandler @ 033f1f24 */
                    /* try { // try from 033f1e54 to 034f1e57 has its CatchHandler @ 033f1e70 */
                                      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                         (pSVar3,StringLiteral_10182/*"Pause"*/,
                                                          (MethodInfo *)0x0);
                    /* try { // try from 033f1e58 to 034f1e5f has its CatchHandler @ 033ef1b0 */
                    /* try { // try from 033f1e60 to 034f1e63 has its CatchHandler @ 033f1e6c */
                                      fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar4,0.0,(MethodInfo *)0x0)
                                      ;
                    /* try { // try from 033f1e64 to 034f1fb7 has its CatchHandler @ 033ef1b0 */
                                      (__this_00->fields).LJJPOKGLLHC = fVar9;
                    /* catch() { ... } // from try @ 033f1e60 with catch @ 033f1e6c */
                    /* catch() { ... } // from try @ 033f1e54 with catch @ 033f1e70 */
                    /* catch() { ... } // from try @ 033f0f18 with catch @ 033f1e74 */
                    /* catch() { ... } // from try @ 033f1e38 with catch @ 033f1e78 */
                                      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                 methodPtr)(AHDGNOJPPIB,
                                                            (AHDGNOJPPIB->klass->vtable).
                                                            _16_get_Attributes.method);
                    /* catch() { ... } // from try @ 033f0ed8 with catch @ 033f1e7c */
                                      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 033f18c0 with catch @ 033f1e80 */
                    /* catch() { ... } // from try @ 033f1e34 with catch @ 033f1e84 */
                    /* catch() { ... } // from try @ 033f0d80 with catch @ 033f1e88 */
                    /* catch() { ... } // from try @ 033f0d74 with catch @ 033f1e8c */
                    /* catch() { ... } // from try @ 033f1e30 with catch @ 033f1e90 */
                    /* catch() { ... } // from try @ 033f0db0 with catch @ 033f1e94 */
                    /* catch() { ... } // from try @ 033f1e2c with catch @ 033f1e98 */
                                        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                           (pSVar3,StringLiteral_12118/*"ShowType"*/,
                                                            (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033f0dd4 with catch @ 033f1e9c */
                    /* catch() { ... } // from try @ 033f0dbc with catch @ 033f1ea0 */
                    /* catch() { ... } // from try @ 033f0d98 with catch @ 033f1ea4 */
                                        iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                                                          (pSVar4,0,
                                                  Method_EIABCPKDEBD_CKHGJBKDIID<FKNCNNOOOIO_HMFAPGCJJLL>__
                                                  );
                    /* catch() { ... } // from try @ 033f0d64 with catch @ 033f1ea8 */
                                        (__this_00->fields).AIDMEFDEOLJ = iVar2;
                    /* catch() { ... } // from try @ 033f0c90 with catch @ 033f1eac */
                    /* catch() { ... } // from try @ 033f0cb0 with catch @ 033f1eb0 */
                    /* catch() { ... } // from try @ 033f0c9c with catch @ 033f1eb4 */
                    /* catch() { ... } // from try @ 033f1e1c with catch @ 033f1eb8 */
                    /* catch() { ... } // from try @ 033f0bb4 with catch @ 033f1ebc */
                                        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.
                                                   methodPtr)(AHDGNOJPPIB,
                                                              (AHDGNOJPPIB->klass->vtable).
                                                              _16_get_Attributes.method);
                    /* catch() { ... } // from try @ 033f0c78 with catch @ 033f1ec0 */
                                        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 033f0ea8 with catch @ 033f1ec4 */
                    /* catch() { ... } // from try @ 033f0f00 with catch @ 033f1ec8 */
                    /* catch() { ... } // from try @ 033f1e14 with catch @ 033f1ecc */
                    /* catch() { ... } // from try @ 033f0ee4 with catch @ 033f1ed0 */
                    /* catch() { ... } // from try @ 033f1e0c with catch @ 033f1ed4 */
                    /* catch() { ... } // from try @ 033f0e84 with catch @ 033f1ed8 */
                    /* catch() { ... } // from try @ 033f1de8 with catch @ 033f1edc */
                                          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                             (pSVar3,StringLiteral_4665/*"Control"*/,
                                                              (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033f0c48 with catch @ 033f1ee0 */
                    /* catch() { ... } // from try @ 033f0c60 with catch @ 033f1ee4 */
                    /* catch() { ... } // from try @ 033f0df0 with catch @ 033f1ee8 */
                                          iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                                                            (pSVar4,-1,
                                                                                                                          
                                                  Method_EIABCPKDEBD_CKHGJBKDIID<FBBNEILNOKK>__);
                    /* catch() { ... } // from try @ 033f1e24 with catch @ 033f1eec
                       catch() { ... } // from try @ 033f1e3c with catch @ 033f1eec */
                                          (__this_00->fields).ACNLHENNKAJ = iVar2;
                    /* catch() { ... } // from try @ 033f1914 with catch @ 033f1ef0 */
                    /* catch() { ... } // from try @ 033f18e4 with catch @ 033f1ef4 */
                    /* catch() { ... } // from try @ 033f1908 with catch @ 033f1ef8 */
                    /* catch() { ... } // from try @ 033f1928 with catch @ 033f1efc */
                    /* catch() { ... } // from try @ 033f0d4c with catch @ 033f1f00 */
                                          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes
                                                     .methodPtr)(AHDGNOJPPIB,
                                                                 (AHDGNOJPPIB->klass->vtable).
                                                                 _16_get_Attributes.method);
                    /* catch() { ... } // from try @ 033f0bc4 with catch @ 033f1f04 */
                                          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0)
                                          {
                    /* catch() { ... } // from try @ 033f1948 with catch @ 033f1f08 */
                    /* catch() { ... } // from try @ 033f189c with catch @ 033f1f0c */
                    /* catch() { ... } // from try @ 033f1e10 with catch @ 033f1f10
                       catch() { ... } // from try @ 033f1e18 with catch @ 033f1f10 */
                    /* catch() { ... } // from try @ 033f0cd8 with catch @ 033f1f14 */
                    /* catch() { ... } // from try @ 033f1de4 with catch @ 033f1f18 */
                    /* catch() { ... } // from try @ 033f0cf0 with catch @ 033f1f1c
                       catch() { ... } // from try @ 033f0f38 with catch @ 033f1f1c */
                    /* catch() { ... } // from try @ 033f1960 with catch @ 033f1f20 */
                                            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                               (pSVar3,StringLiteral_7347/*"ImageScale"*/,
                                                                (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033f1e20 with catch @ 033f1f24
                       catch() { ... } // from try @ 033f1e28 with catch @ 033f1f24
                       catch() { ... } // from try @ 033f1e48 with catch @ 033f1f24 */
                    /* catch() { ... } // from try @ 033f0c1c with catch @ 033f1f28 */
                    /* catch() { ... } // from try @ 033f1dd4 with catch @ 033f1f2c */
                                            fVar9 = EIABCPKDEBD__GICIEKCGOHA
                                                              (pSVar4,1.0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033f0c2c with catch @ 033f1f30 */
                                            (__this_00->fields).MJNNMHHINEF = fVar9;
                    /* catch() { ... } // from try @ 033f0c00 with catch @ 033f1f34 */
                    /* catch() { ... } // from try @ 033f1dd0 with catch @ 033f1f38 */
                    /* catch() { ... } // from try @ 033f0c10 with catch @ 033f1f3c */
                    /* catch() { ... } // from try @ 033f0e20 with catch @ 033f1f40 */
                    /* catch() { ... } // from try @ 033f1ddc with catch @ 033f1f44
                       catch() { ... } // from try @ 033f1df8 with catch @ 033f1f44 */
                    /* catch() { ... } // from try @ 033f197c with catch @ 033f1f48 */
                                            AHDGNOJPPIB_00 =
                                                 (System_Xml_XmlNode_o *)
                                                 (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.
                                                   methodPtr)(AHDGNOJPPIB,StringLiteral_8823/*"MapButtonImage"*/,
                                                              (AHDGNOJPPIB->klass->vtable).
                                                              _51_get_Item.method);
                    /* catch() { ... } // from try @ 033f1dcc with catch @ 033f1f4c */
                                            if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 033f1878 with catch @ 033f1f50 */
                    /* catch() { ... } // from try @ 033f0b8c with catch @ 033f1f54 */
                    /* catch() { ... } // from try @ 033f0b9c with catch @ 033f1f58 */
                    /* catch() { ... } // from try @ 033f1dc8 with catch @ 033f1f5c */
                    /* catch() { ... } // from try @ 033f1dc4 with catch @ 033f1f60 */
                                              pJVar6 = (JOCNCPCOEAC_o *)
                                                       thunk_FUN_01bda818(JOCNCPCOEAC_TypeInfo);
                    /* catch() { ... } // from try @ 033efd70 with catch @ 033f1f64 */
                    /* catch() { ... } // from try @ 033f1dd8 with catch @ 033f1f68
                       catch() { ... } // from try @ 033f1de0 with catch @ 033f1f68
                       catch() { ... } // from try @ 033f1dec with catch @ 033f1f68 */
                    /* catch() { ... } // from try @ 033f1810 with catch @ 033f1f6c */
                    /* catch() { ... } // from try @ 033f1dc0 with catch @ 033f1f70 */
                                              JOCNCPCOEAC___ctor(pJVar6,AHDGNOJPPIB_00,
                                                                 (MethodInfo *)0x0);
                                              ppJVar7 = &(__this_00->fields).JHFAAGIPDAJ;
                    /* catch() { ... } // from try @ 033f1dbc with catch @ 033f1f74 */
                    /* catch() { ... } // from try @ 033f1db8 with catch @ 033f1f78 */
                                              *ppJVar7 = pJVar6;
                    /* catch() { ... } // from try @ 033f1858 with catch @ 033f1f7c */
                    /* catch() { ... } // from try @ 033f1800 with catch @ 033f1f80 */
                                              thunk_FUN_01c20e04(ppJVar7,pJVar6);
                                            }
                    /* catch() { ... } // from try @ 033f19b0 with catch @ 033f1f84 */
                                            ppJVar7 = &(__this_00->fields).JHFAAGIPDAJ;
                    /* catch() { ... } // from try @ 033efce0 with catch @ 033f1f88 */
                    /* catch() { ... } // from try @ 033f0b6c with catch @ 033f1f8c */
                                            if (*ppJVar7 == (JOCNCPCOEAC_o *)0x0) {
                    /* catch() { ... } // from try @ 033f181c with catch @ 033f1f90 */
                    /* catch() { ... } // from try @ 033f1db0 with catch @ 033f1f94 */
                    /* catch() { ... } // from try @ 033f1794 with catch @ 033f1f98 */
                    /* catch() { ... } // from try @ 033f1738 with catch @ 033f1f9c */
                    /* catch() { ... } // from try @ 033f1da8 with catch @ 033f1fa0 */
                                              pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                                                       (*(AHDGNOJPPIB->klass->vtable).
                                                         _16_get_Attributes.methodPtr)
                                                                 (AHDGNOJPPIB,
                                                                  (AHDGNOJPPIB->klass->vtable).
                                                                  _16_get_Attributes.method);
                                              if (pSVar3 == (System_Xml_XmlAttributeCollection_o *)
                                                            0x0) goto LAB_033f2070;
                    /* try { // try from 033f1fb8 to 034f1fbb has its CatchHandler @ 033f1fcc */
                                              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                                                 (pSVar3,StringLiteral_8095/*"Item"*/,
                                                                  (MethodInfo *)0x0);
                                              method_00 = (MethodInfo *)0x0;
                                              pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                                                                 (pSVar4,StringLiteral_1/*""*/,
                                                                  (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033f1fb8 with catch @ 033f1fcc */
                                              bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                                                                (pSVar5,(MethodInfo *)0x0);
                                              pJVar6 = (JOCNCPCOEAC_o *)0x0;
                                              if (!bVar1) {
                    /* try { // try from 033f1fdc to 034f2057 has its CatchHandler @ 033f2404 */
                                                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0)
                                                {
                                                  thunk_FUN_01ba7564();
                                                }
                                                if (DAT_04563eaa == '\0') {
                                                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                                                  DAT_04563eaa = '\x01';
                                                }
                                                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0)
                                                {
                                                  thunk_FUN_01ba7564();
                                                }
                                                __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->
                                                            _IDHKFPFDECA_k__BackingField;
                                                if (__this_01 == (Item_o *)0x0)
                                                goto LAB_033f2070;
                                                pHVar8 = Item__CKKIPBAIEMN
                                                                   (__this_01,pSVar5,method_00);
                                                if (pHVar8 == (HOOAAGABMBL_o *)0x0) {
                                                  pJVar6 = (JOCNCPCOEAC_o *)0x0;
                                                }
                                                else {
                                                  pJVar6 = (pHVar8->fields).
                                                           _KNNLLCNGLGO_k__BackingField;
                                                }
                                              }
                                              *ppJVar7 = pJVar6;
                                              thunk_FUN_01c20e04(ppJVar7);
                                            }
                    /* catch() { ... } // from try @ 033efd48 with catch @ 033f2058
                       try { // try from 033f2058 to 034f208f has its CatchHandler @ 033ef1b0 */
                    /* catch() { ... } // from try @ 033efd40 with catch @ 033f205c */
                    /* catch() { ... } // from try @ 033efd74 with catch @ 033f2060 */
                    /* catch() { ... } // from try @ 033efd98 with catch @ 033f2064 */
                    /* catch() { ... } // from try @ 033f1da4 with catch @ 033f2068 */
                    /* catch() { ... } // from try @ 033efd30 with catch @ 033f206c */
                                            return __this_00;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_033f2070:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033f1da0 with catch @ 033f2070 */
  FUN_01bab8c8();
}


// ===== private MapButton CCKJJKGDOEG(GameObject KCAHJMFOIAG, FKNCNNOOOIO GCOMKDMCMDN, bool JLJECBJOKII)  [RVA 0x32F2074]
// MapButtonController$$CCKJJKGDOEG @ RVA 0x32F2074

Nekki_SF2_GUI_Map_MapButton_o *
MapButtonController__CCKJJKGDOEG
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,FKNCNNOOOIO_o *GCOMKDMCMDN,
          bool JLJECBJOKII,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButton_o *pNVar1;
  
                    /* catch() { ... } // from try @ 033f0b0c with catch @ 033f2074 */
                    /* catch() { ... } // from try @ 033f0ab0 with catch @ 033f2078 */
  pNVar1 = MapButtonController__JFIJFIEOGIC(__this,KCAHJMFOIAG,GCOMKDMCMDN,JLJECBJOKII,method);
  return pNVar1;
}


// ===== private void HGLLNAOGFEN(GameObject KCAHJMFOIAG, List<MapButton> GMFEBFOGDAA, bool MADBADMMABJ = False)  [RVA 0x32F207C]
// MapButtonController$$HGLLNAOGFEN @ RVA 0x32F207C

void MapButtonController__HGLLNAOGFEN
               (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,
               System_Collections_Generic_List_MapButton__o *GMFEBFOGDAA,bool MADBADMMABJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *IHGFKLOLPOK;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  NMAHEBEALAB_o *ABAGBODPCCP;
  Nekki_SF2_GUI_Map_MapButton_o *item;
  int64_t iVar4;
  MethodInfo *method_00;
  Item_o *pDVar5;
  Nekki_SF2_GUI_Map_MapButton_array *pNVar6;
  FKNCNNOOOIO_o *pFVar7;
  System_String_o *key;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 033f2090 to 034f2093 has its CatchHandler @ 033f20a4 */
                    /* catch() { ... } // from try @ 033f2090 with catch @ 033f20a4 */
                    /* try { // try from 033f20b4 to 034f212f has its CatchHandler @ 033f2404 */
  if ((DAT_04567675 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_13771/*"TicketMysteryBox_Junior"*/);
    DAT_04567675 = 1;
  }
                    /* catch() { ... } // from try @ 033f1d9c with catch @ 033f2130
                       try { // try from 033f2130 to 034f2217 has its CatchHandler @ 033ef1b0 */
                    /* catch() { ... } // from try @ 033f0514 with catch @ 033f2134 */
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
                    /* catch() { ... } // from try @ 033f050c with catch @ 033f2138 */
  local_80.fields._current = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 033f04fc with catch @ 033f213c */
                    /* catch() { ... } // from try @ 033f0800 with catch @ 033f2140 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033f0840 with catch @ 033f2144 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 033f1d98 with catch @ 033f2148 */
                    /* catch() { ... } // from try @ 033f0894 with catch @ 033f214c */
                    /* catch() { ... } // from try @ 033f0838 with catch @ 033f2150 */
  if (DAT_04563eaa == '\0') {
                    /* catch() { ... } // from try @ 033f0820 with catch @ 033f2154 */
                    /* catch() { ... } // from try @ 033f07e0 with catch @ 033f2158 */
                    /* catch() { ... } // from try @ 033f079c with catch @ 033f215c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 033f07ac with catch @ 033f2160 */
                    /* catch() { ... } // from try @ 033f07f8 with catch @ 033f2164 */
    DAT_04563eaa = '\x01';
  }
                    /* catch() { ... } // from try @ 033f1d8c with catch @ 033f2168 */
                    /* catch() { ... } // from try @ 033f1d88 with catch @ 033f216c */
                    /* catch() { ... } // from try @ 033f1d84 with catch @ 033f2170 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033f1d80 with catch @ 033f2174 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 033efcb4 with catch @ 033f2178 */
  }
                    /* catch() { ... } // from try @ 033f1d7c with catch @ 033f217c */
                    /* catch() { ... } // from try @ 033efd10 with catch @ 033f2180 */
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    /* catch() { ... } // from try @ 033efce4 with catch @ 033f2184 */
                    /* catch() { ... } // from try @ 033f1d78 with catch @ 033f2188 */
                    /* catch() { ... } // from try @ 033f1d70 with catch @ 033f218c */
  if ((pDVar5 == (Item_o *)0x0) ||
     (__this_00 = (pDVar5->fields)._BDIDINACBBH_k__BackingField,
     __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 033f04e4 with catch @ 033f2190 */
                    /* catch() { ... } // from try @ 033f0574 with catch @ 033f2194 */
                    /* catch() { ... } // from try @ 033f04b0 with catch @ 033f2198 */
                    /* catch() { ... } // from try @ 033f04bc with catch @ 033f219c */
                    /* catch() { ... } // from try @ 033f0498 with catch @ 033f21a0 */
                    /* catch() { ... } // from try @ 033f0468 with catch @ 033f21a4 */
                    /* catch() { ... } // from try @ 033f1d6c with catch @ 033f21a8 */
                    /* catch() { ... } // from try @ 033f1d60 with catch @ 033f21ac */
                    /* catch() { ... } // from try @ 033f04a8 with catch @ 033f21b0 */
                    /* catch() { ... } // from try @ 033f04d4 with catch @ 033f21b4 */
                    /* catch() { ... } // from try @ 033f045c with catch @ 033f21b8 */
                    /* catch() { ... } // from try @ 033f03fc with catch @ 033f21bc */
                    /* catch() { ... } // from try @ 033f0408 with catch @ 033f21c0 */
                    /* catch() { ... } // from try @ 033f0444 with catch @ 033f21c4 */
                    /* catch() { ... } // from try @ 033f1d5c with catch @ 033f21c8 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
                    /* catch() { ... } // from try @ 033f1d58 with catch @ 033f21cc */
                    /* catch() { ... } // from try @ 033f1d54 with catch @ 033f21d0 */
                    /* catch() { ... } // from try @ 033f1d50 with catch @ 033f21d4 */
  local_80.fields._list = local_98.fields._list;
                    /* catch() { ... } // from try @ 033f03f4 with catch @ 033f21d8 */
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    do {
                    /* catch() { ... } // from try @ 033f03e4 with catch @ 033f21dc */
                    /* catch() { ... } // from try @ 033f0454 with catch @ 033f21e0 */
                    /* catch() { ... } // from try @ 033f1d48 with catch @ 033f21e4 */
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      IHGFKLOLPOK = local_80.fields._current;
                    /* catch() { ... } // from try @ 033f0718 with catch @ 033f21e8 */
                    /* catch() { ... } // from try @ 033f06bc with catch @ 033f21ec */
                    /* catch() { ... } // from try @ 033f1d90 with catch @ 033f21f0 */
                    /* catch() { ... } // from try @ 033f07b8 with catch @ 033f21f4 */
                    /* catch() { ... } // from try @ 033f077c with catch @ 033f21f8 */
      if ((!bVar3) ||
         ((MADBADMMABJ &&
          (bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                             ((System_Collections_Generic_List_T__o *)GMFEBFOGDAA,
                              Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__), !bVar3)))) {
                    /* catch() { ... } // from try @ 033f22e8 with catch @ 033f230c */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
                    /* try { // try from 033f2314 to 034f2327 has its CatchHandler @ 033f2404 */
                    /* catch() { ... } // from try @ 033f0350 with catch @ 033f2328
                       try { // try from 033f2328 to 034f235b has its CatchHandler @ 033ef1b0 */
                    /* catch() { ... } // from try @ 033f02f4 with catch @ 033f232c */
        return;
      }
      if ((HOOAAGABMBL_o *)IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033f1d64 with catch @ 033f2330 */
        FUN_01bab8c8();
      }
      method_00 = (MethodInfo *)0x0;
      bVar3 = System_String__op_Equality
                        (((HOOAAGABMBL_Fields *)((long)IHGFKLOLPOK + 0x10))->
                         _COIPKAKHDFP_k__BackingField,StringLiteral_13771/*"TicketMysteryBox_Junior"*/,(MethodInfo *)0x0);
                    /* try { // try from 033f2218 to 034f221b has its CatchHandler @ 033f222c */
    } while ((bVar3) ||
            (bVar3 = MapButtonController__OMFIAFKMCMF
                               ((MapButtonController_o *)0x0,(HOOAAGABMBL_o *)IHGFKLOLPOK,method_00), !bVar3
            ));
                    /* catch() { ... } // from try @ 033f2218 with catch @ 033f222c */
    ABAGBODPCCP = (NMAHEBEALAB_o *)
                  (*(((HOOAAGABMBL_c *)IHGFKLOLPOK->klass)->vtable)._6_PDECHBMCBDB.methodPtr)
                            (IHGFKLOLPOK,0,
                             (((HOOAAGABMBL_c *)IHGFKLOLPOK->klass)->vtable)._6_PDECHBMCBDB.method);
                    /* try { // try from 033f223c to 034f22b7 has its CatchHandler @ 033f2404 */
    item = MapButtonController__CHNLGNGBPIN
                     (__this,KCAHJMFOIAG,(HOOAAGABMBL_o *)IHGFKLOLPOK,ABAGBODPCCP,method);
    lVar2 = Method_System_Collections_Generic_List<MapButton>_Add__;
    if (GMFEBFOGDAA == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033f03c4 with catch @ 033f2334 */
      FUN_01bab8c8();
    }
    pNVar6 = (GMFEBFOGDAA->fields)._items;
    (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
    if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (GMFEBFOGDAA->fields)._size;
    if (uVar1 < (uint)pNVar6->max_length) {
      (GMFEBFOGDAA->fields)._size = uVar1 + 1;
      pNVar6->m_Items[(int)uVar1] = item;
      thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    if (item == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 033efc7c with catch @ 033f22b8
                       try { // try from 033f22b8 to 034f22e7 has its CatchHandler @ 033ef1b0 */
    pFVar7 = (item->fields).AEPNEAIEKOL;
                    /* catch() { ... } // from try @ 033efc90 with catch @ 033f22bc */
    if (pFVar7 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 033f1d44 with catch @ 033f22c0 */
                    /* catch() { ... } // from try @ 033f1d40 with catch @ 033f22c4 */
    local_c0.fields.hiddenValue =
         (((HOOAAGABMBL_Fields *)((long)IHGFKLOLPOK + 0x10))->_AHMCDBKNKAJ_k__BackingField).fields.
         hiddenValue;
    local_c0.fields.currentCryptoKey =
         (((HOOAAGABMBL_Fields *)((long)IHGFKLOLPOK + 0x10))->_AHMCDBKNKAJ_k__BackingField).fields.
         currentCryptoKey;
    local_c0.fields.fakeValueActive = *(bool_conflict *)&IHGFKLOLPOK[0x12].klass;
    local_c0.fields.inited = *(bool_conflict *)((long)&IHGFKLOLPOK[0x12].klass + 1);
    local_c0.fields._26_6_ = *(undefined6 *)((long)&IHGFKLOLPOK[0x12].klass + 2);
    local_c0.fields.fakeValue =
         (((HOOAAGABMBL_Fields *)((long)IHGFKLOLPOK + 0x10))->_AHMCDBKNKAJ_k__BackingField).fields.
         fakeValue;
                    /* catch() { ... } // from try @ 033efc60 with catch @ 033f22c8 */
    __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).CJKAPEOHOLL
    ;
    key = (pFVar7->fields).JIJLBFGKNJK;
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_c0,(MethodInfo *)0x0)
    ;
    if (__this_01 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) break;
                    /* try { // try from 033f22e8 to 034f22eb has its CatchHandler @ 033f230c */
                    /* try { // try from 033f22ec to 034f2313 has its CatchHandler @ 033ef1b0 */
    System_Collections_Generic_Dictionary<object,_int>__Add
              (__this_01,(Il2CppObject *)key,(int32_t)iVar4,
               Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GDIEKADDMOB(Action<string> CJNHFNHJHPE)  [RVA 0x32F2974]
// MapButtonController$$GDIEKADDMOB @ RVA 0x32F2974

void MapButtonController__GDIEKADDMOB
               (MapButtonController_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *source;
  
  if ((DAT_04567676 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04567676 = 1;
  }
  ppSVar6 = &(__this->fields).BKGHBFHIPHK;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private List<MapButton> LLNADPGEEEJ(GameObject KCAHJMFOIAG, bool MADBADMMABJ = False)  [RVA 0x32F2A24]
// MapButtonController$$LLNADPGEEEJ @ RVA 0x32F2A24

System_Collections_Generic_List_MapButton__o *
MapButtonController__LLNADPGEEEJ
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,bool MADBADMMABJ,
          MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_List_MapButton__o *GMFEBFOGDAA;
  LIDDCJFOOOI_o *pLVar1;
  MethodInfo *in_x4;
  MethodInfo *in_x6;
  System_Collections_Generic_List_string__o *pSVar2;
  
  if ((DAT_04567677 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MapButton>_TypeInfo);
    DAT_04567677 = 1;
  }
  pSVar2 = (__this->fields).PAFEHLCLKEC;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
                    /* try { // try from 033f2a9c to 034f2aa3 has its CatchHandler @ 033f3108 */
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).CJKAPEOHOLL
    ;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* try { // try from 033f2abc to 034f2ac3 has its CatchHandler @ 033f3104 */
      System_Collections_Generic_Dictionary<object,_int>__Clear
                (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
                    /* try { // try from 033f2ad8 to 034f2adf has its CatchHandler @ 033f2b58 */
      GMFEBFOGDAA = (System_Collections_Generic_List_MapButton__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,
                 Method_System_Collections_Generic_List<MapButton>__ctor__);
      pLVar1 = (__this->fields).GNMGOPAABKE;
                    /* try { // try from 033f2aec to 034f2af7 has its CatchHandler @ 033f2b50 */
      if (pLVar1 != (LIDDCJFOOOI_o *)0x0) {
        LIDDCJFOOOI__DGLJCGNHLIG(pLVar1,0.0,60.0,(MethodInfo *)0x0);
                    /* try { // try from 033f2b04 to 034f2b0b has its CatchHandler @ 033f2b54 */
        pLVar1 = (__this->fields).PFBKEFOBEDB;
        if (pLVar1 != (LIDDCJFOOOI_o *)0x0) {
                    /* try { // try from 033f2b1c to 034f2b23 has its CatchHandler @ 033f30f4 */
          LIDDCJFOOOI__DGLJCGNHLIG(pLVar1,0.0,60.0,(MethodInfo *)0x0);
          MapButtonController__BIMEOHNANKC(__this,KCAHJMFOIAG,GMFEBFOGDAA,MADBADMMABJ,in_x4);
                    /* try { // try from 033f2b38 to 034f2b3b has its CatchHandler @ 033f2b4c */
                    /* try { // try from 033f2b40 to 034f2b43 has its CatchHandler @ 033f2b48 */
                    /* try { // try from 033f2b44 to 034f2b6f has its CatchHandler @ 033f26fc */
                    /* catch() { ... } // from try @ 033f2b40 with catch @ 033f2b48 */
          MapButtonController__HGLLNAOGFEN(__this,KCAHJMFOIAG,GMFEBFOGDAA,MADBADMMABJ,in_x4);
                    /* catch() { ... } // from try @ 033f2b38 with catch @ 033f2b4c */
                    /* catch() { ... } // from try @ 033f2aec with catch @ 033f2b50 */
                    /* catch() { ... } // from try @ 033f2b04 with catch @ 033f2b54 */
                    /* catch() { ... } // from try @ 033f2ad8 with catch @ 033f2b58 */
          MapButtonController__NJMNFMIBOPJ(__this,KCAHJMFOIAG,GMFEBFOGDAA,true,false,MADBADMMABJ,in_x6);
                    /* try { // try from 033f2b70 to 034f2b73 has its CatchHandler @ 033f30d8 */
                    /* try { // try from 033f2b74 to 034f2e27 has its CatchHandler @ 033f26fc */
          return GMFEBFOGDAA;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MapButton KIGNIOMCNAP(GameObject KCAHJMFOIAG)  [RVA 0x32F32C0]
// MapButtonController$$KIGNIOMCNAP @ RVA 0x32F32C0

/* WARNING: Type propagation algorithm not settling */

Nekki_SF2_GUI_Map_MapButton_o *
MapButtonController__KIGNIOMCNAP
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  FKNCNNOOOIO_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Map_MapButton_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_03;
  System_String_o **ppSVar1;
  System_Nullable_Vector2__o __this_04;
  undefined8 local_50;
  float local_48;
  
  if ((DAT_04567678 & 1) == 0) {
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&Method_NCNJEIBHGBH_DFBAIPNBPLB__);
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12932/*"Textures/buttons/map/SaleTimerRibbon.png"*/);
    FUN_01bab630(&StringLiteral_18115/*"eventButton"*/);
    DAT_04567678 = 1;
  }
  __this_00 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
  FKNCNNOOOIO___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (FKNCNNOOOIO_o *)0x0) {
    (__this_00->fields).JIJLBFGKNJK = StringLiteral_18115/*"eventButton"*/;
    thunk_FUN_01c20e04();
    ppSVar1 = &(__this_00->fields).KPDPJONADPJ;
    *ppSVar1 = StringLiteral_12932/*"Textures/buttons/map/SaleTimerRibbon.png"*/;
    thunk_FUN_01c20e04(ppSVar1);
    (__this_00->fields).OEFBIKEMBOF = true;
    local_48 = 0.0;
    local_50 = 0;
    __this_04.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
    __this_04.fields._0_8_ = &local_50;
    System_Nullable<Vector2>___ctor
              (__this_04,(UnityEngine_Vector2_o)0x42820000c2700000,(MethodInfo_27FC874 *)method);
    (__this_00->fields).OLBNFCKMBEL.fields.value.fields.y = local_48;
    (__this_00->fields).OLBNFCKMBEL.fields.hasValue = (bool_conflict)(undefined1)local_50;
    *(undefined3 *)&(__this_00->fields).OLBNFCKMBEL.fields.field_0x1 = local_50._1_3_;
    (__this_00->fields).OLBNFCKMBEL.fields.value.fields.x = (float)local_50._4_4_;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)KCAHJMFOIAG,
                           Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_02 = (Nekki_SF2_GUI_Map_MapButton_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_01,Method_UnityEngine_GameObject_GetComponent<MapButton>__),
       __this_02 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0)) {
      Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo(__this_02,__this_00,(MethodInfo *)0x0);
      __this_03 = (UnityEngine_Events_UnityEvent_o *)(__this_02->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
        return __this_02;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MECBPJMCCDA(Action<string> CJNHFNHJHPE)  [RVA 0x32F34AC]
// MapButtonController$$MECBPJMCCDA @ RVA 0x32F34AC

void MapButtonController__MECBPJMCCDA
               (MapButtonController_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *a;
  
  if ((DAT_04567679 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04567679 = 1;
  }
  ppSVar6 = &(__this->fields).FBENJEIDACA;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void GJCCEHJONPA(int OGPGLGPMEPD)  [RVA 0x32F355C]
// MapButtonController$$GJCCEHJONPA @ RVA 0x32F355C

void MapButtonController__GJCCEHJONPA(MapButtonController_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *key;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  System_String_o **ppSVar4;
  System_Collections_Generic_Dictionary_object__int__o *pSVar5;
  System_Action_string__o *pSVar6;
  PKHMIGFEJCL_o *pPVar7;
  
  if ((DAT_0456767a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456767a = 1;
  }
  __this_00 = (__this->fields).PAFEHLCLKEC;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    key = StringLiteral_1/*""*/;
    if (OGPGLGPMEPD < (__this_00->fields)._size) {
      key = (System_String_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)__this_00,OGPGLGPMEPD,
                       Method_System_Collections_Generic_List<string>_get_Item__);
    }
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar7 = (pNVar3->fields).QuestParameters, pPVar7 != (PKHMIGFEJCL_o *)0x0)) {
      ppSVar4 = &(pPVar7->fields).MCEKGACJNMK;
      *ppSVar4 = key;
      thunk_FUN_01c20e04(ppSVar4,key);
      pSVar5 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).CJKAPEOHOLL;
      if (pSVar5 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                          (pSVar5,(Il2CppObject *)key,
                           Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
        if (bVar1) {
          pSVar5 = (System_Collections_Generic_Dictionary_object__int__o *)
                   (__this->fields).CJKAPEOHOLL;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)
          goto LAB_033f36a4;
          iVar2 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                            (pSVar5,(Il2CppObject *)key,
                             Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
          (pPVar7->fields).FGOGAJBOILK = iVar2;
        }
        pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar3,0x1a,(MethodInfo *)0x0);
          pSVar6 = (__this->fields).BKGHBFHIPHK;
          if (pSVar6 == (System_Action_string__o *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x033f3694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,key,
                     (pSVar6->fields).super.super.method);
          return;
        }
      }
    }
  }
LAB_033f36a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<MapButton> LEOLPAJFBLF(GameObject KCAHJMFOIAG)  [RVA 0x32F36A8]
// MapButtonController$$LEOLPAJFBLF @ RVA 0x32F36A8

System_Collections_Generic_List_MapButton__o *
MapButtonController__LEOLPAJFBLF
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_MapButton__o *GMFEBFOGDAA;
  MethodInfo *in_x6;
  System_Collections_Generic_List_string__o *pSVar1;
  
  if ((DAT_0456767b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MapButton>_TypeInfo);
    DAT_0456767b = 1;
  }
  pSVar1 = (__this->fields).DMLKGAKPCAB;
  if (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    GMFEBFOGDAA = (System_Collections_Generic_List_MapButton__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,
               Method_System_Collections_Generic_List<MapButton>__ctor__);
    MapButtonController__NJMNFMIBOPJ(__this,KCAHJMFOIAG,GMFEBFOGDAA,false,true,false,in_x6);
    return GMFEBFOGDAA;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool LFGIGCHIPIA(FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x32F3778]
// MapButtonController$$LFGIGCHIPIA @ RVA 0x32F3778

bool MapButtonController__LFGIGCHIPIA(MapButtonController_o *__this,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FKNCNNOOOIO__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456767c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
    DAT_0456767c = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JODEDMLAIEG;
  if (__this_00 == (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_033f383c;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (*(int *)&local_48.fields._current[7].monitor != AAJGEHHPMGH);
  iVar2 = 4;
LAB_033f383c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
  return bVar1 && iVar2 == 4;
}


// ===== public void GAOPCGKKBFH(Action<FKNCNNOOOIO> CJNHFNHJHPE)  [RVA 0x32F38E0]
// MapButtonController$$GAOPCGKKBFH @ RVA 0x32F38E0

void MapButtonController__GAOPCGKKBFH
               (MapButtonController_o *__this,System_Action_FKNCNNOOOIO__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FKNCNNOOOIO__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FKNCNNOOOIO__o *pSVar5;
  System_Action_FKNCNNOOOIO__o *a;
  
  if ((DAT_0456767d & 1) == 0) {
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    DAT_0456767d = 1;
  }
  a = (__this->fields).HKBOCMKKIOI;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<FKNCNNOOOIO>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FKNCNNOOOIO>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FKNCNNOOOIO__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void JCDCJJMEAJA(FKNCNNOOOIO GCOMKDMCMDN)  [RVA 0x32F3990]
// MapButtonController$$JCDCJJMEAJA @ RVA 0x32F3990

void MapButtonController__JCDCJJMEAJA(MapButtonController_o *__this,FKNCNNOOOIO_o *GCOMKDMCMDN,MethodInfo *method)

{
  if (GCOMKDMCMDN != (FKNCNNOOOIO_o *)0x0) {
    MapButtonController__JCDCJJMEAJA(__this,(GCOMKDMCMDN->fields).JIJLBFGKNJK,method);
    return;
  }
  return;
}


// ===== public void JCDCJJMEAJA(string KGLJICLJHEL)  [RVA 0x32F39A0]
// MapButtonController$$JCDCJJMEAJA @ RVA 0x32F39A0

void MapButtonController__JCDCJJMEAJA(MapButtonController_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  Il2CppObject *item;
  MethodInfo *method_00;
  System_Action_FKNCNNOOOIO__o *pSVar2;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar3;
  
  if ((DAT_0456767e & 1) == 0) {
    FUN_01bab630(&Method_NCNJEIBHGBH_FKDNPHPNPMC_IAINPGKKEOE__);
    FUN_01bab630(&MapButtonController_FKDNPHPNPMC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Remove__);
    FUN_01bab630(&System_Predicate<FKNCNNOOOIO>_TypeInfo);
    DAT_0456767e = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(MapButtonController_FKDNPHPNPMC_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(pIVar1,KGLJICLJHEL);
    pSVar3 = (__this->fields).JODEDMLAIEG;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FKNCNNOOOIO>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar3 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__;
      item = System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)pSVar3,match,
                        (MethodInfo_26E5414 *)
                        Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__);
      if (item != (Il2CppObject *)0x0) {
        MapButtonController__KKKGNGNJGCA(__this,(System_String_o *)pIVar1->klass,method_00);
        pSVar3 = (__this->fields).JODEDMLAIEG;
        if (pSVar3 == (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) goto LAB_033f3af8;
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar3,item,
                   Method_System_Collections_Generic_List<FKNCNNOOOIO>_Remove__);
        pSVar2 = (__this->fields).KLCCBGKNCBD;
        if (pSVar2 != (System_Action_FKNCNNOOOIO__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f3ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar2->fields).super.super.invoke_impl)
                    ((pSVar2->fields).super.super.method_code,item,
                     (pSVar2->fields).super.super.method);
          return;
        }
      }
      return;
    }
  }
LAB_033f3af8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BIMEOHNANKC(GameObject KCAHJMFOIAG, List<MapButton> GMFEBFOGDAA, bool MADBADMMABJ = False)  [RVA 0x32F2B80]
// MapButtonController$$BIMEOHNANKC @ RVA 0x32F2B80

void MapButtonController__BIMEOHNANKC
               (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,
               System_Collections_Generic_List_MapButton__o *GMFEBFOGDAA,bool MADBADMMABJ,
               MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  Il2CppObject *IHGFKLOLPOK;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  MapButtonController_o *__this_01;
  int64_t iVar4;
  Nekki_SF2_GUI_Map_MapButton_o *item;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  Item_o *pDVar5;
  Nekki_SF2_GUI_Map_MapButton_array *pNVar6;
  System_Text_StringBuilder_o *pSVar7;
  char cVar8;
  System_String_o *JHDEDPMNOOJ;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456767f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456767f = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if ((pDVar5 != (Item_o *)0x0) &&
     (__this_00 = (pDVar5->fields).FDLFEJAEDGA,
     __this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        IHGFKLOLPOK = local_80.fields._current;
        if ((!bVar3) ||
           ((MADBADMMABJ &&
            (bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                               ((System_Collections_Generic_List_T__o *)GMFEBFOGDAA,
                                Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__), !bVar3)))) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          return;
        }
        if ((HOOAAGABMBL_o *)IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f2e28 to 034f2e4f has its CatchHandler @ 033f3174 */
          FUN_01bab8c8();
        }
        method_00 = (((HOOAAGABMBL_c *)IHGFKLOLPOK->klass)->vtable)._6_PDECHBMCBDB.method;
        __this_01 = (MapButtonController_o *)
                    (*(((HOOAAGABMBL_c *)IHGFKLOLPOK->klass)->vtable)._6_PDECHBMCBDB.methodPtr)
                              (IHGFKLOLPOK,0);
        if (__this_01 == (MapButtonController_o *)0x0) {
          cVar8 = '\0';
        }
        else {
          cVar8 = *(char *)((long)&__this_01[1].klass + 2);
        }
        bVar3 = MapButtonController__OMFIAFKMCMF(__this_01,(HOOAAGABMBL_o *)IHGFKLOLPOK,method_00);
      } while (!bVar3 || cVar8 == '\0');
      if (__this_01 == (MapButtonController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((System_String_o *)(__this_01->fields).HKBOCMKKIOI,(MethodInfo *)0x0);
      lVar1 = 0x18;
      if (!bVar3) {
        lVar1 = 0x10;
      }
      JHDEDPMNOOJ = *(System_String_o **)((long)&__this_01->klass + lVar1);
      pSVar7 = (__this_01->fields).LJLADKMLDEF;
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      iVar4 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
      item = MapButtonController__BGGKNPJBECD
                       (__this,KCAHJMFOIAG,(HOOAAGABMBL_o *)IHGFKLOLPOK,JHDEDPMNOOJ,
                        (long)pSVar7 - iVar4,in_x5);
      lVar1 = Method_System_Collections_Generic_List<MapButton>_Add__;
      if (GMFEBFOGDAA == (System_Collections_Generic_List_MapButton__o *)0x0) break;
      pNVar6 = (GMFEBFOGDAA->fields)._items;
      (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
      if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (GMFEBFOGDAA->fields)._size;
      if (uVar2 < (uint)pNVar6->max_length) {
        (GMFEBFOGDAA->fields)._size = uVar2 + 1;
        pNVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FLCMDHADNCN(XmlNode JHMENEKPIBO)  [RVA 0x32F3DC4]
// MapButtonController$$FLCMDHADNCN @ RVA 0x32F3DC4

void MapButtonController__FLCMDHADNCN
               (MapButtonController_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlElement_o *pSVar2;
  System_Xml_XmlNode_o **ppSVar3;
  
  if ((DAT_04567680 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8825/*"MapButtons"*/);
    DAT_04567680 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                       (JHMENEKPIBO,StringLiteral_8825/*"MapButtons"*/,
                        (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
    ppSVar3 = &(__this->fields).DMLGJFCNNJF;
    *ppSVar3 = pSVar1;
    thunk_FUN_01c20e04(ppSVar3,pSVar1);
    if (*ppSVar3 == (System_Xml_XmlNode_o *)0x0) {
      pSVar2 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,StringLiteral_8825/*"MapButtons"*/,(MethodInfo *)0x0);
      *ppSVar3 = (System_Xml_XmlNode_o *)pSVar2;
      thunk_FUN_01c20e04(ppSVar3,pSVar2);
      return;
    }
  }
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode JHMENEKPIBO, LAMJOHEKJNJ IDMHBKIMEGE)  [RVA 0x32F3E64]
// MapButtonController$$HNIHOIAMDPC @ RVA 0x32F3E64

void MapButtonController__HNIHOIAMDPC
               (MapButtonController_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,LAMJOHEKJNJ_o *IDMHBKIMEGE,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  int iVar3;
  System_Xml_XmlNode_o *pSVar4;
  long *plVar5;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *KGLJICLJHEL;
  MapButtonController_o *__this_01;
  FKNCNNOOOIO_o *item;
  System_Xml_XmlNode_o *pSVar6;
  MethodInfo *pMVar7;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar8;
  FKNCNNOOOIO_array *pFVar9;
  
  pMVar7 = (MethodInfo *)IDMHBKIMEGE;
  if ((DAT_04567681 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Clear__);
    FUN_01bab630(&StringLiteral_13814/*"Timer"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567681 = 1;
  }
  MapButtonController__FLCMDHADNCN(__this,JHMENEKPIBO,pMVar7);
  pSVar8 = (__this->fields).JODEDMLAIEG;
  if (pSVar8 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields).DMLGJFCNNJF;
    if ((pSVar4 != (System_Xml_XmlNode_o *)0x0) &&
       (plVar5 = (long *)(*(pSVar4->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (pSVar4,(pSVar4->klass->vtable)._13_get_ChildNodes.method),
       plVar5 != (long *)0x0)) {
      iVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      while( true ) {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return;
        }
        pSVar4 = (__this->fields).DMLGJFCNNJF;
        if ((((pSVar4 == (System_Xml_XmlNode_o *)0x0) ||
             (plVar5 = (long *)(*(pSVar4->klass->vtable)._13_get_ChildNodes.methodPtr)
                                         (pSVar4,(pSVar4->klass->vtable)._13_get_ChildNodes.method),
             plVar5 == (long *)0x0)) ||
            (pSVar4 = (System_Xml_XmlNode_o *)
                      (**(code **)(*plVar5 + 0x1c8))(plVar5,iVar3,*(undefined8 *)(*plVar5 + 0x1d0)),
            pSVar4 == (System_Xml_XmlNode_o *)0x0)) ||
           (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                        (*(pSVar4->klass->vtable)._16_get_Attributes.methodPtr)
                                  (pSVar4,(pSVar4->klass->vtable)._16_get_Attributes.method),
           __this_00 == (System_Xml_XmlAttributeCollection_o *)0x0)) break;
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_13814/*"Timer"*/,(MethodInfo *)0x0);
        KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        if (IDMHBKIMEGE == (LAMJOHEKJNJ_o *)0x0) break;
        pMVar7 = (MethodInfo *)0x0;
        __this_01 = (MapButtonController_o *)
                    LAMJOHEKJNJ__FENHANFAIND(IDMHBKIMEGE,KGLJICLJHEL,(MethodInfo *)0x0);
        if (__this_01 == (MapButtonController_o *)0x0) {
          pSVar6 = (__this->fields).DMLGJFCNNJF;
          if (pSVar6 == (System_Xml_XmlNode_o *)0x0) break;
          (*(pSVar6->klass->vtable)._25_RemoveChild.methodPtr)
                    (pSVar6,pSVar4,(pSVar6->klass->vtable)._25_RemoveChild.method);
        }
        else {
          item = MapButtonController__LAAGFLEJBGP(__this_01,pSVar4,pMVar7);
          lVar2 = Method_System_Collections_Generic_List<FKNCNNOOOIO>_Add__;
          pSVar8 = (__this->fields).JODEDMLAIEG;
          if (pSVar8 == (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) break;
          pFVar9 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pFVar9 == (FKNCNNOOOIO_array *)0x0) break;
          uVar1 = (pSVar8->fields)._size;
          if (uVar1 < (uint)pFVar9->max_length) {
            (pSVar8->fields)._size = uVar1 + 1;
            pFVar9->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LFFLJMNNBBN(out int DFIBGGDJPLM, out long NFBEBOIDJLL, out bool LJHEKJFJBCA)  [RVA 0x32F4064]
// MapButtonController$$LFFLJMNNBBN @ RVA 0x32F4064

/* WARNING: Removing unreachable block (ram,0x033f48bc) */
/* WARNING: Removing unreachable block (ram,0x033f44ac) */
/* WARNING: Removing unreachable block (ram,0x033f48cc) */
/* WARNING: Removing unreachable block (ram,0x033f48d8) */

void MapButtonController__LFFLJMNNBBN
               (MapButtonController_o *__this,int32_t *DFIBGGDJPLM,int64_t *NFBEBOIDJLL,bool *LJHEKJFJBCA,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  FAIJGJCCKJC_Fields *pFVar2;
  byte bVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_FKNCNNOOOIO__o *__this_00;
  System_Text_StringBuilder_o *pSVar6;
  LAMJOHEKJNJ_o *__this_01;
  LPEBBHNDFCG_o *pLVar7;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar8;
  MapButtonController_o *pNVar9;
  int64_t iVar10;
  System_String_array *values;
  System_String_o *pSVar11;
  SFRequestSender_o *__this_02;
  int64_t iVar12;
  MethodInfo *pMVar13;
  long lVar14;
  Item_o *pDVar15;
  Roster_o *pAVar16;
  FAIJGJCCKJC_o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  long local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  undefined4 local_64;
  
  if ((DAT_04567682 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9315/*"NUL!"*/);
    FUN_01bab630(&StringLiteral_390/*" discount is null. "*/);
    FUN_01bab630(&StringLiteral_469/*" localTime="*/);
    FUN_01bab630(&StringLiteral_406/*" end="*/);
    FUN_01bab630(&StringLiteral_533/*" start="*/);
    DAT_04567682 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_a8 = 0;
  *DFIBGGDJPLM = 0;
  *NFBEBOIDJLL = 0;
  *LJHEKJFJBCA = false;
  local_64 = 1;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  pAVar16 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar16 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pAVar16->fields)._DDGPMHMNKNA_k__BackingField != (LAMJOHEKJNJ_o *)0x0) {
    __this_00 = (__this->fields).JODEDMLAIEG;
    if (__this_00 == (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_c0,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
    local_80.fields._index = local_c0.fields._index;
    local_80.fields._version = local_c0.fields._version;
    local_80.fields._list = local_c0.fields._list;
    local_80.fields._current = local_c0.fields._current;
    while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__
                             ), pIVar4 = local_80.fields._current, bVar5) {
      pSVar6 = (__this->fields).LJLADKMLDEF;
      if (pSVar6 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pFVar2 = (FAIJGJCCKJC_Fields *)&StringLiteral_9315/*"NUL!"*/;
      if ((FAIJGJCCKJC_o *)local_80.fields._current != (FAIJGJCCKJC_o *)0x0) {
        pFVar2 = (FAIJGJCCKJC_Fields *)((long)local_80.fields._current + 0x10);
      }
      System_Text_StringBuilder__AppendLine
                (pSVar6,*(System_String_o **)&pFVar2->super,(MethodInfo *)0x0);
      if ((FAIJGJCCKJC_o *)pIVar4 == (FAIJGJCCKJC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((((FAIJGJCCKJC_Fields *)((long)pIVar4 + 0x10))->super)._NPMFPMGCNEC_k__BackingField !=
          false) {
        *DFIBGGDJPLM = *DFIBGGDJPLM + 1;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar16 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar16 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (pAVar16->fields)._DDGPMHMNKNA_k__BackingField;
        if (__this_01 == (LAMJOHEKJNJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pLVar7 = LAMJOHEKJNJ__FENHANFAIND
                           (__this_01,
                            (((FAIJGJCCKJC_Fields *)((long)pIVar4 + 0x10))->super).
                            _GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
        if (pLVar7 != (LPEBBHNDFCG_o *)0x0) {
          lVar14 = (pLVar7->fields)._PGKPHJLHJCO_k__BackingField;
          if ((*NFBEBOIDJLL == 0) || (lVar14 < *NFBEBOIDJLL)) {
            *NFBEBOIDJLL = lVar14;
          }
        }
        pSVar6 = (__this->fields).LJLADKMLDEF;
        if (pSVar6 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Text_StringBuilder__Clear(pSVar6,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
  }
  local_64 = 2;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar15 == (Item_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = (pDVar15->fields).FDLFEJAEDGA;
  if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_c0,(System_Collections_Generic_List_object__o *)pSVar8,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_a0.fields._index = local_c0.fields._index;
  local_a0.fields._version = local_c0.fields._version;
                    /* try { // try from 033f43c0 to 034f43fb has its CatchHandler @ 033f43c0
                       catch() { ... } // from try @ 033f43c0 with catch @ 033f43c0
                       catch() { ... } // from try @ 033f449c with catch @ 033f43c0
                       catch() { ... } // from try @ 033f44e8 with catch @ 033f43c0
                       catch() { ... } // from try @ 033f4528 with catch @ 033f43c0 */
  local_a0.fields._list = local_c0.fields._list;
  local_a0.fields._current = local_c0.fields._current;
  while (bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_a0,
                            Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                           ), pIVar4 = local_a0.fields._current, bVar5) {
    pSVar6 = (__this->fields).LJLADKMLDEF;
    if (pSVar6 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pFVar2 = (FAIJGJCCKJC_Fields *)&StringLiteral_9315/*"NUL!"*/;
    if ((FAIJGJCCKJC_o *)local_a0.fields._current != (FAIJGJCCKJC_o *)0x0) {
      pFVar2 = (FAIJGJCCKJC_Fields *)
               &(((FAIJGJCCKJC_Fields *)((long)local_a0.fields._current + 0x10))->super).
                _COIPKAKHDFP_k__BackingField;
    }
                    /* try { // try from 033f43fc to 034f440b has its CatchHandler @ 033f44b8 */
    pMVar13 = (MethodInfo *)0x0;
    pNVar9 = (MapButtonController_o *)
             System_Text_StringBuilder__AppendLine
                       (pSVar6,*(System_String_o **)&pFVar2->super,(MethodInfo *)0x0);
    bVar5 = MapButtonController__OMFIAFKMCMF(pNVar9,(HOOAAGABMBL_o *)pIVar4,pMVar13);
    if (bVar5) {
                    /* try { // try from 033f4410 to 034f4417 has its CatchHandler @ 033f44b4 */
      if ((FAIJGJCCKJC_o *)pIVar4 == (FAIJGJCCKJC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 033f441c to 034f4427 has its CatchHandler @ 033f44b0 */
      lVar14 = (*(((FAIJGJCCKJC_c *)pIVar4->klass)->vtable)._6_PDECHBMCBDB.methodPtr)
                         (pIVar4,0,(((FAIJGJCCKJC_c *)pIVar4->klass)->vtable)._6_PDECHBMCBDB.method)
      ;
      *DFIBGGDJPLM = *DFIBGGDJPLM + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 033f443c to 034f4447 has its CatchHandler @ 033f44a8 */
      lVar14 = *(long *)(lVar14 + 0x70);
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      iVar10 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
      lVar14 = lVar14 - iVar10;
                    /* try { // try from 033f4468 to 034f4477 has its CatchHandler @ 033f44a0 */
      if ((lVar14 < *NFBEBOIDJLL) || (*NFBEBOIDJLL == 0)) {
        *NFBEBOIDJLL = lVar14;
      }
      pSVar6 = (__this->fields).LJLADKMLDEF;
      if (pSVar6 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Text_StringBuilder__Clear(pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 033f4480 to 034f448f has its CatchHandler @ 033f449c */
    }
  }
                    /* try { // try from 033f4494 to 034f4497 has its CatchHandler @ 033f44ac */
                    /* try { // try from 033f4498 to 034f449b has its CatchHandler @ 033f44a4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4480 with catch @ 033f449c
                       try { // try from 033f449c to 034f44cf has its CatchHandler @ 033f43c0 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_a0,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4468 with catch @ 033f44a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4498 with catch @ 033f44a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f443c with catch @ 033f44a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f441c with catch @ 033f44b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4410 with catch @ 033f44b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f43fc with catch @ 033f44b8
                        */
  local_64 = 3;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
                    /* try { // try from 033f44d0 to 034f44e7 has its CatchHandler @ 033f4520 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
                    /* try { // try from 033f44e8 to 034f450f has its CatchHandler @ 033f43c0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar15 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar15 == (Item_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = (pDVar15->fields)._BDIDINACBBH_k__BackingField;
  if (pSVar8 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033f4510 to 034f451f has its CatchHandler @ 033f4520 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_c0,(System_Collections_Generic_List_object__o *)pSVar8,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_a0.fields._index = local_c0.fields._index;
  local_a0.fields._version = local_c0.fields._version;
                    /* catch() { ... } // from try @ 033f44d0 with catch @ 033f4520
                       catch() { ... } // from try @ 033f4510 with catch @ 033f4520 */
                    /* try { // try from 033f4524 to 034f4527 has its CatchHandler @ 033f4530 */
                    /* try { // try from 033f4528 to 034f4533 has its CatchHandler @ 033f43c0 */
  local_a0.fields._list = local_c0.fields._list;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f4524 with catch @ 033f4530
                        */
  local_a0.fields._current = local_c0.fields._current;
  while( true ) {
    while( true ) {
      do {
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_a0,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        __this_03 = (FAIJGJCCKJC_o *)local_a0.fields._current;
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
          return;
        }
        pSVar6 = (__this->fields).LJLADKMLDEF;
        if (pSVar6 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ppSVar1 = &(((FAIJGJCCKJC_Fields *)((long)local_a0.fields._current + 0x10))->super).
                   _COIPKAKHDFP_k__BackingField;
        pFVar2 = (FAIJGJCCKJC_Fields *)&StringLiteral_9315/*"NUL!"*/;
        if ((FAIJGJCCKJC_o *)local_a0.fields._current != (FAIJGJCCKJC_o *)0x0) {
          pFVar2 = (FAIJGJCCKJC_Fields *)ppSVar1;
        }
        pMVar13 = (MethodInfo *)0x0;
        pNVar9 = (MapButtonController_o *)
                 System_Text_StringBuilder__AppendLine
                           (pSVar6,*(System_String_o **)&pFVar2->super,(MethodInfo *)0x0);
        bVar5 = MapButtonController__OMFIAFKMCMF(pNVar9,(HOOAAGABMBL_o *)__this_03,pMVar13);
      } while (!bVar5);
      if (__this_03 == (FAIJGJCCKJC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar14 = (*(((FAIJGJCCKJC_c *)((Il2CppObject *)__this_03)->klass)->vtable)._6_PDECHBMCBDB.
                 methodPtr)(__this_03,0,
                            (((FAIJGJCCKJC_c *)((Il2CppObject *)__this_03)->klass)->vtable).
                            _6_PDECHBMCBDB.method);
      if (lVar14 == 0) break;
      *DFIBGGDJPLM = *DFIBGGDJPLM + 1;
      lVar14 = *(long *)(lVar14 + 0x70);
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      iVar10 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
      lVar14 = lVar14 - iVar10;
      if ((lVar14 < *NFBEBOIDJLL) || (*NFBEBOIDJLL == 0)) {
        *NFBEBOIDJLL = lVar14;
        *LJHEKJFJBCA = true;
      }
      pSVar6 = (__this->fields).LJLADKMLDEF;
      if (pSVar6 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Text_StringBuilder__Clear(pSVar6,(MethodInfo *)0x0);
    }
    bVar3 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if ((((FAIJGJCCKJC_c *)((Il2CppObject *)__this_03)->klass)->_2).naturalAligment < bVar3) {
      __this_03 = (FAIJGJCCKJC_o *)0x0;
    }
    else if ((((FAIJGJCCKJC_c *)((Il2CppObject *)__this_03)->klass)->_2).typeHierarchy
             [(ulong)bVar3 - 1] != (Il2CppClass *)FAIJGJCCKJC_TypeInfo) {
      __this_03 = (FAIJGJCCKJC_o *)0x0;
    }
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,9);
    if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[0] = *ppSVar1;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[1] = StringLiteral_390/*" discount is null. "*/;
    thunk_FUN_01c20e04();
    if (__this_03 == (FAIJGJCCKJC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[2] = (__this_03->fields).super._HONAAKEIHJI_k__BackingField;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[3] = StringLiteral_533/*" start="*/;
    thunk_FUN_01c20e04();
    local_a8 = FAIJGJCCKJC__PPPNCCIPNEH(__this_03,(MethodInfo *)0x0);
    pSVar11 = System_Int64__ToString((int64_t)&local_a8,(MethodInfo *)0x0);
    if ((uint)values->max_length < 5) break;
    values->m_Items[4] = pSVar11;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[5] = StringLiteral_406/*" end="*/;
    thunk_FUN_01c20e04();
    local_a8 = FAIJGJCCKJC__EFOFAAKJOGD(__this_03,(MethodInfo *)0x0);
    pSVar11 = System_Int64__ToString((int64_t)&local_a8,(MethodInfo *)0x0);
    if ((uint)values->max_length < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[6] = pSVar11;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[7] = StringLiteral_469/*" localTime="*/;
    thunk_FUN_01c20e04();
    __this_02 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_02 == (SFRequestSender_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar10 = SFRequestSender__HEDLNKCNMCI(__this_02,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar12 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
    local_a8 = iVar12 + iVar10;
    pSVar11 = System_Int64__ToString((int64_t)&local_a8,(MethodInfo *)0x0);
    if ((uint)values->max_length < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[8] = pSVar11;
    thunk_FUN_01c20e04();
    pSVar11 = System_String__Concat(values,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar11,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public MapButton MKIGGEJHHMH(GameObject KCAHJMFOIAG)  [RVA 0x32F4BFC]
// MapButtonController$$MKIGGEJHHMH @ RVA 0x32F4BFC

Nekki_SF2_GUI_Map_MapButton_o *
MapButtonController__MKIGGEJHHMH
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButton_o *pNVar1;
  FKNCNNOOOIO_o *CJNHFNHJHPE;
  MethodInfo *in_x4;
  undefined1 local_38 [8];
  bool local_28 [4];
  int32_t local_24;
  
  if ((DAT_04567683 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8822/*"MapButtonController::CreateButtonForConner roster is null"*/);
    DAT_04567683 = 1;
  }
  local_24 = 0;
  local_38 = (undefined1  [8])0x0;
  local_28[0] = false;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_8822/*"MapButtonController::CreateButtonForConner roster is null"*/,(MethodInfo *)0x0);
  }
  else {
    method = (MethodInfo *)local_38;
    MapButtonController__LFFLJMNNBBN(__this,&local_24,(int64_t *)method,local_28,in_x4);
    if (0 < local_24) {
      pNVar1 = MapButtonController__KIGNIOMCNAP(__this,KCAHJMFOIAG,method);
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
        CJNHFNHJHPE = (pNVar1->fields).AEPNEAIEKOL;
        (pNVar1->fields).UseEventTimerPos = true;
        if (CJNHFNHJHPE != (FKNCNNOOOIO_o *)0x0) {
          (CJNHFNHJHPE->fields).ALLCFABAGOB = (int64_t)local_38;
          Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_MapButton__Refresh(pNVar1,(MethodInfo *)0x0);
          return pNVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  pNVar1 = MapButtonController__CANNODKGOME(__this,KCAHJMFOIAG,method);
  return pNVar1;
}


// ===== private void NJMNFMIBOPJ(GameObject KCAHJMFOIAG, List<MapButton> GMFEBFOGDAA, bool DDDMDNMNCIO, bool HOAJOICOBJD = True, bool MADBADMMABJ = False)  [RVA 0x32F2EDC]
// MapButtonController$$NJMNFMIBOPJ @ RVA 0x32F2EDC

void MapButtonController__NJMNFMIBOPJ
               (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,
               System_Collections_Generic_List_MapButton__o *GMFEBFOGDAA,bool DDDMDNMNCIO,
               bool HOAJOICOBJD,bool MADBADMMABJ,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *BMINOMGENHE;
  bool bVar4;
  System_Collections_Generic_List_FKNCNNOOOIO__o *__this_00;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar5;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Map_MapButton_array *pNVar6;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_00 = (MethodInfo *)(ulong)HOAJOICOBJD;
                    /* try { // try from 033f2ee4 to 034f2ef3 has its CatchHandler @ 033f30e8 */
  if ((DAT_04567684 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__);
                    /* try { // try from 033f2f30 to 034f2f4b has its CatchHandler @ 033f30ec */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_get_Current__);
                    /* try { // try from 033f2f4c to 034f3087 has its CatchHandler @ 033f26fc */
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
    DAT_04567684 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JODEDMLAIEG;
  if (__this_00 == (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FKNCNNOOOIO>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    while( true ) {
      while( true ) {
        do {
          bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_MoveNext__
                            );
          BMINOMGENHE = local_80.fields._current;
          if ((!bVar4) ||
             ((MADBADMMABJ &&
              (bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                                 ((System_Collections_Generic_List_T__o *)GMFEBFOGDAA,
                                  Method_DJNBJHPDKDP_OBECCOPBADO<MapButton>__), !bVar4)))) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<FKNCNNOOOIO>_Dispose__);
            return;
          }
        } while (((FKNCNNOOOIO_o *)BMINOMGENHE == (FKNCNNOOOIO_o *)0x0) ||
                (((FKNCNNOOOIO_Fields *)((long)BMINOMGENHE + 0x10))->OEFBIKEMBOF != DDDMDNMNCIO));
        iVar1 = ((FKNCNNOOOIO_Fields *)((long)BMINOMGENHE + 0x10))->AIDMEFDEOLJ;
        if (iVar1 != 2) break;
        pNVar5 = MapButtonController__JFIJFIEOGIC
                           (__this,KCAHJMFOIAG,(FKNCNNOOOIO_o *)BMINOMGENHE,false,method_00);
        lVar3 = Method_System_Collections_Generic_List<MapButton>_Add__;
        if (GMFEBFOGDAA == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033f3088 to 034f309f has its CatchHandler @ 033f3230 */
        pNVar6 = (GMFEBFOGDAA->fields)._items;
        (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
        if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033f30a0 to 034f30a3 has its CatchHandler @ 033f3100 */
        uVar2 = (GMFEBFOGDAA->fields)._size;
                    /* try { // try from 033f30a4 to 034f30a7 has its CatchHandler @ 033f30fc */
                    /* try { // try from 033f30a8 to 034f30af has its CatchHandler @ 033f30f8 */
        if (uVar2 < (uint)pNVar6->max_length) {
                    /* try { // try from 033f30b0 to 034f30b7 has its CatchHandler @ 033f30f0 */
                    /* try { // try from 033f30b8 to 034f30bf has its CatchHandler @ 033f3178 */
          (GMFEBFOGDAA->fields)._size = uVar2 + 1;
          pNVar6->m_Items[(int)uVar2] = pNVar5;
                    /* try { // try from 033f30c0 to 034f30cb has its CatchHandler @ 033f26fc */
          thunk_FUN_01c20e04();
        }
        else {
                    /* catch() { ... } // from try @ 033f3120 with catch @ 033f314c */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)pNVar5
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      if (iVar1 == 1) break;
                    /* try { // try from 033f30cc to 034f30cf has its CatchHandler @ 033f30e4 */
                    /* try { // try from 033f30d0 to 034f311f has its CatchHandler @ 033f26fc */
                    /* catch() { ... } // from try @ 033f2b70 with catch @ 033f30d8 */
      pNVar5 = MapButtonController__JFIJFIEOGIC
                         (__this,KCAHJMFOIAG,(FKNCNNOOOIO_o *)BMINOMGENHE,true,method_00);
      lVar3 = Method_System_Collections_Generic_List<MapButton>_Add__;
      if (GMFEBFOGDAA == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033f321c to 034f3227 has its CatchHandler @ 033f26fc */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 033f30cc with catch @ 033f30e4 */
                    /* catch() { ... } // from try @ 033f2ee4 with catch @ 033f30e8 */
      pNVar6 = (GMFEBFOGDAA->fields)._items;
                    /* catch() { ... } // from try @ 033f2f30 with catch @ 033f30ec */
                    /* catch() { ... } // from try @ 033f30b0 with catch @ 033f30f0 */
                    /* catch() { ... } // from try @ 033f2b1c with catch @ 033f30f4 */
      (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
                    /* catch() { ... } // from try @ 033f30a8 with catch @ 033f30f8 */
      if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 033f30a4 with catch @ 033f30fc */
      uVar2 = (GMFEBFOGDAA->fields)._size;
                    /* catch() { ... } // from try @ 033f30a0 with catch @ 033f3100 */
                    /* catch() { ... } // from try @ 033f2abc with catch @ 033f3104 */
                    /* catch() { ... } // from try @ 033f2a9c with catch @ 033f3108 */
      if (uVar2 < (uint)pNVar6->max_length) {
        (GMFEBFOGDAA->fields)._size = uVar2 + 1;
        pNVar6->m_Items[(int)uVar2] = pNVar5;
        thunk_FUN_01c20e04();
                    /* try { // try from 033f3120 to 034f3123 has its CatchHandler @ 033f314c */
      }
      else {
                    /* try { // try from 033f315c to 034f316f has its CatchHandler @ 033f3230 */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)pNVar5,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      if (HOAJOICOBJD) {
                    /* catch() { ... } // from try @ 033f2e84 with catch @ 033f3170
                       try { // try from 033f3170 to 034f318f has its CatchHandler @ 033f26fc */
                    /* catch() { ... } // from try @ 033f2e28 with catch @ 033f3174 */
                    /* catch() { ... } // from try @ 033f30b8 with catch @ 033f3178 */
        pNVar5 = MapButtonController__JFIJFIEOGIC
                           (__this,KCAHJMFOIAG,(FKNCNNOOOIO_o *)BMINOMGENHE,false,method_00);
        lVar3 = Method_System_Collections_Generic_List<MapButton>_Add__;
        pNVar6 = (GMFEBFOGDAA->fields)._items;
                    /* try { // try from 033f3190 to 034f3193 has its CatchHandler @ 033f31a4 */
        (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
        if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (GMFEBFOGDAA->fields)._size;
                    /* catch() { ... } // from try @ 033f3190 with catch @ 033f31a4 */
        if (uVar2 < (uint)pNVar6->max_length) {
                    /* try { // try from 033f31b4 to 034f321b has its CatchHandler @ 033f3230 */
          (GMFEBFOGDAA->fields)._size = uVar2 + 1;
          pNVar6->m_Items[(int)uVar2] = pNVar5;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)pNVar5
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    pNVar5 = MapButtonController__JFIJFIEOGIC
                       (__this,KCAHJMFOIAG,(FKNCNNOOOIO_o *)BMINOMGENHE,true,method_00);
    lVar3 = Method_System_Collections_Generic_List<MapButton>_Add__;
    if (GMFEBFOGDAA == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar6 = (GMFEBFOGDAA->fields)._items;
    (GMFEBFOGDAA->fields)._version = (GMFEBFOGDAA->fields)._version + 1;
    if (pNVar6 == (Nekki_SF2_GUI_Map_MapButton_array *)0x0) break;
    uVar2 = (GMFEBFOGDAA->fields)._size;
    if (uVar2 < (uint)pNVar6->max_length) {
      (GMFEBFOGDAA->fields)._size = uVar2 + 1;
      pNVar6->m_Items[(int)uVar2] = pNVar5;
      thunk_FUN_01c20e04();
    }
    else {
                    /* try { // try from 033f3124 to 034f315b has its CatchHandler @ 033f26fc */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)GMFEBFOGDAA,(Il2CppObject *)pNVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<MapButton> LLNADPGEEEJ(GameObject KCAHJMFOIAG)  [RVA 0x32F4FE4]
// MapButtonController$$LLNADPGEEEJ @ RVA 0x32F4FE4

System_Collections_Generic_List_MapButton__o *
MapButtonController__LLNADPGEEEJ
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  System_Collections_Generic_List_MapButton__o *pSVar1;
  MethodInfo *in_x3;
  
  pSVar1 = MapButtonController__LLNADPGEEEJ(__this,KCAHJMFOIAG,false,in_x3);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x32F4FEC]
// MapButtonController$$.ctor @ RVA 0x32F4FEC

void MapButtonController___ctor(MapButtonController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FKNCNNOOOIO__o *__this_00;
  System_Collections_Generic_List_FKNCNNOOOIO__o **ppSVar1;
  LIDDCJFOOOI_o *pLVar2;
  LIDDCJFOOOI_o **ppLVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_List_string__o **ppSVar5;
  System_Collections_Generic_Dictionary_object__int__o *__this_01;
  System_Collections_Generic_Dictionary_string__int__o **ppSVar6;
  System_Text_StringBuilder_o *__this_02;
  System_Text_StringBuilder_o **ppSVar7;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033f5020 to 034f502b has its CatchHandler @ 033f4b64 */
                    /* try { // try from 033f502c to 034f5033 has its CatchHandler @ 033f5034 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033f4fb8 with catch @ 033f5034
                       catch(type#2 @ 00000000) { ... } // from try @ 033f502c with catch @ 033f5034
                        */
                    /* try { // try from 033f503c to 034f5167 has its CatchHandler @ 033f503c
                       catch() { ... } // from try @ 033f503c with catch @ 033f503c
                       catch() { ... } // from try @ 033f5344 with catch @ 033f503c
                       catch() { ... } // from try @ 033f5400 with catch @ 033f503c
                       catch() { ... } // from try @ 033f5408 with catch @ 033f503c
                       catch() { ... } // from try @ 033f5508 with catch @ 033f503c */
  if ((DAT_04567685 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    FUN_01bab630(&LIDDCJFOOOI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04567685 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_FKNCNNOOOIO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FKNCNNOOOIO>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FKNCNNOOOIO>__ctor__);
  ppSVar1 = &(__this->fields).JODEDMLAIEG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  pLVar2 = (LIDDCJFOOOI_o *)thunk_FUN_01bda818(LIDDCJFOOOI_TypeInfo);
  LIDDCJFOOOI___ctor(pLVar2,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).GNMGOPAABKE;
  *ppLVar3 = pLVar2;
  thunk_FUN_01c20e04(ppLVar3,pLVar2);
  pLVar2 = (LIDDCJFOOOI_o *)thunk_FUN_01bda818(LIDDCJFOOOI_TypeInfo);
  LIDDCJFOOOI___ctor(pLVar2,(MethodInfo *)0x0);
  ppLVar3 = &(__this->fields).PFBKEFOBEDB;
  *ppLVar3 = pLVar2;
  thunk_FUN_01c20e04(ppLVar3,pLVar2);
  pSVar4 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar5 = &(__this->fields).DMLKGAKPCAB;
  *ppSVar5 = pSVar4;
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  pSVar4 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar5 = &(__this->fields).PAFEHLCLKEC;
  *ppSVar5 = pSVar4;
                    /* try { // try from 033f5168 to 034f518f has its CatchHandler @ 033f5448 */
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  __this_01 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  ppSVar6 = &(__this->fields).CJKAPEOHOLL;
  *ppSVar6 = (System_Collections_Generic_Dictionary_string__int__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar6,__this_01);
  __this_02 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_02,(MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).LJLADKMLDEF;
  *ppSVar7 = __this_02;
  thunk_FUN_01c20e04(ppSVar7,__this_02);
                    /* try { // try from 033f51c4 to 034f51ef has its CatchHandler @ 033f5444 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HKIGFKCDAGJ(FKNCNNOOOIO GCOMKDMCMDN, HOOAAGABMBL IKKAMAMLIKA, bool ALOCBHJFNFM = False)  [RVA 0x32F51DC]
// MapButtonController$$HKIGFKCDAGJ @ RVA 0x32F51DC

void MapButtonController__HKIGFKCDAGJ
               (MapButtonController_o *__this,FKNCNNOOOIO_o *GCOMKDMCMDN,HOOAAGABMBL_o *IKKAMAMLIKA,
               bool ALOCBHJFNFM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  Il2CppClass *item;
  FKNCNNOOOIO_array *pFVar6;
  System_Action_FKNCNNOOOIO__o *pSVar7;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar8;
  char **ppcVar9;
  
  if ((DAT_04567686 & 1) == 0) {
    FUN_01bab630(&Method_NCNJEIBHGBH_JFILHCHBMEC_DLGHGNBOKHP__);
    FUN_01bab630(&MapButtonController_JFILHCHBMEC_TypeInfo);
                    /* try { // try from 033f5228 to 034f5237 has its CatchHandler @ 033f5458 */
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__);
                    /* try { // try from 033f5244 to 034f524b has its CatchHandler @ 033f5434 */
    FUN_01bab630(&System_Predicate<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&StringLiteral_12931/*"Textures/buttons/map/"*/);
                    /* try { // try from 033f525c to 034f5263 has its CatchHandler @ 033f543c */
    DAT_04567686 = 1;
  }
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(MapButtonController_JFILHCHBMEC_TypeInfo);
                    /* try { // try from 033f526c to 034f5273 has its CatchHandler @ 033f5424 */
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar3 + 1;
                    /* try { // try from 033f5278 to 034f528f has its CatchHandler @ 033f5450 */
    pIVar3->klass = (Il2CppClass *)GCOMKDMCMDN;
    thunk_FUN_01c20e04(pIVar3,GCOMKDMCMDN);
    if (pIVar3->klass == (Il2CppClass *)0x0) {
      return;
    }
                    /* try { // try from 033f529c to 034f52a3 has its CatchHandler @ 033f5420 */
    pSVar8 = (__this->fields).JODEDMLAIEG;
                    /* try { // try from 033f52ac to 034f52b3 has its CatchHandler @ 033f541c */
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FKNCNNOOOIO>_TypeInfo);
                    /* try { // try from 033f52b8 to 034f52cf has its CatchHandler @ 033f5454 */
    System_Predicate<object>___ctor();
    if (pSVar8 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
                    /* try { // try from 033f52d4 to 034f52df has its CatchHandler @ 033f5418 */
      pIVar4 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)pSVar8,match,
                          Method_System_Collections_Generic_List<FKNCNNOOOIO>_Find__);
      if (pIVar4 != (Il2CppObject *)0x0) {
        return;
      }
      if (pIVar3->klass != (Il2CppClass *)0x0) {
        ppcVar9 = &(pIVar3->klass->_1).namespaze;
        pSVar5 = OFFIONDOEPM__GHALIMLMDOP
                           ((System_String_o *)*ppcVar9,StringLiteral_12931/*"Textures/buttons/map/"*/,(MethodInfo *)0x0);
        *ppcVar9 = (char *)pSVar5;
                    /* try { // try from 033f5320 to 034f5343 has its CatchHandler @ 033f5414 */
        thunk_FUN_01c20e04(ppcVar9,pSVar5);
        MapButtonController__GMIAPIANBMJ
                  (__this,(FKNCNNOOOIO_o *)pIVar3->klass,IKKAMAMLIKA,ALOCBHJFNFM,method);
        lVar2 = Method_System_Collections_Generic_List<FKNCNNOOOIO>_Add__;
        pSVar8 = (__this->fields).JODEDMLAIEG;
        if (pSVar8 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
                    /* try { // try from 033f5344 to 034f53df has its CatchHandler @ 033f503c */
          item = pIVar3->klass;
          pFVar6 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pFVar6 != (FKNCNNOOOIO_array *)0x0) {
            uVar1 = (pSVar8->fields)._size;
            if (uVar1 < (uint)pFVar6->max_length) {
              (pSVar8->fields)._size = uVar1 + 1;
              pFVar6->m_Items[(int)uVar1] = (FKNCNNOOOIO_o *)item;
              thunk_FUN_01c20e04(pFVar6->m_Items + (int)uVar1);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar7 = (__this->fields).HKBOCMKKIOI;
            if (pSVar7 == (System_Action_FKNCNNOOOIO__o *)0x0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x033f53cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar7->fields).super.super.invoke_impl)
                      ((pSVar7->fields).super.super.method_code,pIVar3->klass,
                       (pSVar7->fields).super.super.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GMIAPIANBMJ(FKNCNNOOOIO GCOMKDMCMDN, HOOAAGABMBL IKKAMAMLIKA, bool ALOCBHJFNFM)  [RVA 0x32F53DC]
// MapButtonController$$GMIAPIANBMJ @ RVA 0x32F53DC

void MapButtonController__GMIAPIANBMJ
               (MapButtonController_o *__this,FKNCNNOOOIO_o *GCOMKDMCMDN,HOOAAGABMBL_o *IKKAMAMLIKA,
               bool ALOCBHJFNFM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_String_o *pSVar3;
  float *pfVar4;
  Roster_o *__this_00;
  JOCNCPCOEAC_o *pJVar5;
  float fVar6;
  float __this_01;
  System_Enum_o local_58;
  int32_t local_48;
  
                    /* try { // try from 033f53e0 to 034f53e7 has its CatchHandler @ 033f5440 */
                    /* try { // try from 033f53e8 to 034f53eb has its CatchHandler @ 033f5438 */
                    /* try { // try from 033f53ec to 034f53ef has its CatchHandler @ 033f5430 */
                    /* try { // try from 033f53f0 to 034f53f3 has its CatchHandler @ 033f542c */
                    /* try { // try from 033f53f4 to 034f53f7 has its CatchHandler @ 033f5428 */
                    /* try { // try from 033f53f8 to 034f53ff has its CatchHandler @ 033f544c */
                    /* try { // try from 033f5400 to 034f5403 has its CatchHandler @ 033f503c */
                    /* try { // try from 033f5404 to 034f5407 has its CatchHandler @ 033f5410 */
                    /* try { // try from 033f5408 to 034f5477 has its CatchHandler @ 033f503c */
                    /* catch() { ... } // from try @ 033f5404 with catch @ 033f5410 */
  if ((DAT_04567687 & 1) == 0) {
                    /* catch() { ... } // from try @ 033f5320 with catch @ 033f5414 */
                    /* catch() { ... } // from try @ 033f52d4 with catch @ 033f5418 */
                    /* catch() { ... } // from try @ 033f52ac with catch @ 033f541c */
    FUN_01bab630(&FBBNEILNOKK_TypeInfo);
                    /* catch() { ... } // from try @ 033f529c with catch @ 033f5420 */
                    /* catch() { ... } // from try @ 033f526c with catch @ 033f5424 */
                    /* catch() { ... } // from try @ 033f53f4 with catch @ 033f5428 */
    FUN_01bab630(&FKNCNNOOOIO_GLHPADHBDEL_TypeInfo);
                    /* catch() { ... } // from try @ 033f53f0 with catch @ 033f542c */
                    /* catch() { ... } // from try @ 033f53ec with catch @ 033f5430 */
                    /* catch() { ... } // from try @ 033f5244 with catch @ 033f5434 */
    FUN_01bab630(&FKNCNNOOOIO_HMFAPGCJJLL_TypeInfo);
                    /* catch() { ... } // from try @ 033f53e8 with catch @ 033f5438 */
                    /* catch() { ... } // from try @ 033f525c with catch @ 033f543c */
                    /* catch() { ... } // from try @ 033f53e0 with catch @ 033f5440 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 033f51c4 with catch @ 033f5444 */
                    /* catch() { ... } // from try @ 033f5168 with catch @ 033f5448 */
                    /* catch() { ... } // from try @ 033f53f8 with catch @ 033f544c */
    FUN_01bab630(&StringLiteral_13814/*"Timer"*/);
                    /* catch() { ... } // from try @ 033f5278 with catch @ 033f5450 */
                    /* catch() { ... } // from try @ 033f52b8 with catch @ 033f5454 */
                    /* catch() { ... } // from try @ 033f5228 with catch @ 033f5458 */
    FUN_01bab630(&StringLiteral_2944/*"AnchorMaxX"*/);
    FUN_01bab630(&StringLiteral_7347/*"ImageScale"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 033f5478 to 034f547b has its CatchHandler @ 033f5488 */
    FUN_01bab630(&StringLiteral_12292/*"Speed"*/);
                    /* catch() { ... } // from try @ 033f5478 with catch @ 033f5488 */
    FUN_01bab630(&StringLiteral_12118/*"ShowType"*/);
    FUN_01bab630(&StringLiteral_2946/*"AnchorMinX"*/);
                    /* try { // try from 033f5498 to 034f5507 has its CatchHandler @ 033f551c */
    FUN_01bab630(&StringLiteral_3606/*"Button"*/);
    FUN_01bab630(&StringLiteral_2945/*"AnchorMaxY"*/);
    FUN_01bab630(&StringLiteral_10279/*"PivotY"*/);
    FUN_01bab630(&StringLiteral_4665/*"Control"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_10182/*"Pause"*/);
    FUN_01bab630(&StringLiteral_10278/*"PivotX"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_7344/*"ImagePath"*/);
                    /* try { // try from 033f5508 to 034f5513 has its CatchHandler @ 033f503c */
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
                    /* try { // try from 033f5514 to 034f551b has its CatchHandler @ 033f551c */
    FUN_01bab630(&StringLiteral_2947/*"AnchorMinY"*/);
                    /* catch() { ... } // from try @ 033f5498 with catch @ 033f551c
                       catch() { ... } // from try @ 033f5514 with catch @ 033f551c */
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    DAT_04567687 = 1;
  }
  JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                          ((__this->fields).DMLGJFCNNJF,StringLiteral_3606/*"Button"*/,(MethodInfo *)0x0);
  if ((GCOMKDMCMDN != (FKNCNNOOOIO_o *)0x0) && (JHMENEKPIBO != (System_Xml_XmlElement_o *)0x0)) {
    (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
              (JHMENEKPIBO,StringLiteral_9327/*"Name"*/,(GCOMKDMCMDN->fields).JIJLBFGKNJK,
               (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
              (JHMENEKPIBO,StringLiteral_7340/*"Image"*/,(GCOMKDMCMDN->fields).KPDPJONADPJ,
               (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    local_58.klass = (System_Enum_c *)FKNCNNOOOIO_GLHPADHBDEL_TypeInfo;
    local_58.monitor = (void *)0xffffffffffffffff;
    local_48 = (GCOMKDMCMDN->fields).BGHFADDGPAD;
    pSVar3 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
              (JHMENEKPIBO,StringLiteral_13991/*"Type"*/,pSVar3,
               (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    pfVar4 = &(GCOMKDMCMDN->fields).FMAIEIJAFPA;
    fVar6 = *pfVar4;
    if (0.0 < fVar6) {
      pSVar3 = System_Single__ToString(fVar6,(MethodInfo *)pfVar4);
      (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                (JHMENEKPIBO,StringLiteral_12292/*"Speed"*/,pSVar3,
                 (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    }
    pfVar4 = &(GCOMKDMCMDN->fields).LJJPOKGLLHC;
    fVar6 = *pfVar4;
    if (0.0 < fVar6) {
      pSVar3 = System_Single__ToString(fVar6,(MethodInfo *)pfVar4);
      fVar6 = (float)(*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                               (JHMENEKPIBO,StringLiteral_10182/*"Pause"*/,pSVar3,
                                (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    }
    if ((GCOMKDMCMDN->fields).OEFBIKEMBOF == false) {
      pSVar3 = System_Single__ToString(fVar6,(MethodInfo *)&(GCOMKDMCMDN->fields).BEKOHBPEEKP);
      fVar6 = (float)(*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                               (JHMENEKPIBO,StringLiteral_15021/*"X"*/,pSVar3,
                                (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
      pSVar3 = System_Single__ToString
                         (fVar6,(MethodInfo *)&(GCOMKDMCMDN->fields).BEKOHBPEEKP.fields.y);
      fVar6 = (float)(*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                               (JHMENEKPIBO,StringLiteral_15134/*"Y"*/,pSVar3,
                                (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
      pSVar3 = System_Single__ToString(fVar6,(MethodInfo *)&(GCOMKDMCMDN->fields).FKICEICKCOG);
      fVar6 = (float)(*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                               (JHMENEKPIBO,StringLiteral_2946/*"AnchorMinX"*/,pSVar3,
                                (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
      pSVar3 = System_Single__ToString
                         (fVar6,(MethodInfo *)&(GCOMKDMCMDN->fields).FKICEICKCOG.fields.y);
      fVar6 = (float)(*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                               (JHMENEKPIBO,StringLiteral_2947/*"AnchorMinY"*/,pSVar3,
                                (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
      pSVar3 = System_Single__ToString(fVar6,(MethodInfo *)&(GCOMKDMCMDN->fields).CCEKJNEFJKP);
      fVar6 = (float)(*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                               (JHMENEKPIBO,StringLiteral_2944/*"AnchorMaxX"*/,pSVar3,
                                (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
      pSVar3 = System_Single__ToString
                         (fVar6,(MethodInfo *)&(GCOMKDMCMDN->fields).CCEKJNEFJKP.fields.y);
      fVar6 = (float)(*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                               (JHMENEKPIBO,StringLiteral_2945/*"AnchorMaxY"*/,pSVar3,
                                (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
      pSVar3 = System_Single__ToString(fVar6,(MethodInfo *)&(GCOMKDMCMDN->fields).LNBKBMNLJNG);
      fVar6 = (float)(*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                               (JHMENEKPIBO,StringLiteral_10278/*"PivotX"*/,pSVar3,
                                (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
      pSVar3 = System_Single__ToString
                         (fVar6,(MethodInfo *)&(GCOMKDMCMDN->fields).LNBKBMNLJNG.fields.y);
      (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                (JHMENEKPIBO,StringLiteral_10279/*"PivotY"*/,pSVar3,
                 (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    }
    bVar2 = System_String__IsNullOrEmpty((GCOMKDMCMDN->fields).MEONABNPAPF,(MethodInfo *)0x0);
    if (!bVar2) {
      (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                (JHMENEKPIBO,StringLiteral_7344/*"ImagePath"*/,(GCOMKDMCMDN->fields).MEONABNPAPF,
                 (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    }
    bVar2 = System_String__IsNullOrEmpty((GCOMKDMCMDN->fields).AOOKMODPLGM,(MethodInfo *)0x0);
    if (!bVar2) {
      (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                (JHMENEKPIBO,StringLiteral_13814/*"Timer"*/,(GCOMKDMCMDN->fields).AOOKMODPLGM,
                 (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    }
    local_58.klass = (System_Enum_c *)FKNCNNOOOIO_HMFAPGCJJLL_TypeInfo;
    local_58.monitor = (void *)0xffffffffffffffff;
    local_48 = (GCOMKDMCMDN->fields).AIDMEFDEOLJ;
    pSVar3 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
    (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
              (JHMENEKPIBO,StringLiteral_12118/*"ShowType"*/,pSVar3,
               (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    iVar1 = (GCOMKDMCMDN->fields).ACNLHENNKAJ;
    if (iVar1 != -1) {
      local_58.klass = (System_Enum_c *)FBBNEILNOKK_TypeInfo;
      local_58.monitor = (void *)0xffffffffffffffff;
      local_48 = iVar1;
      pSVar3 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
      (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                (JHMENEKPIBO,StringLiteral_4665/*"Control"*/,pSVar3,
                 (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    }
    pfVar4 = &(GCOMKDMCMDN->fields).MJNNMHHINEF;
    bVar2 = Util__DJAEMCOEKOI((double)*pfVar4,1.0,1.000000013351432e-10,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = System_Single__ToString(__this_01,(MethodInfo *)pfVar4);
      (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                (JHMENEKPIBO,StringLiteral_7347/*"ImageScale"*/,pSVar3,
                 (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    }
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._66_SetAttribute.methodPtr)
                (JHMENEKPIBO,StringLiteral_8095/*"Item"*/,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                 (JHMENEKPIBO->klass->vtable)._66_SetAttribute.method);
    }
    if ((ALOCBHJFNFM) &&
       (pJVar5 = (GCOMKDMCMDN->fields).JHFAAGIPDAJ, pJVar5 != (JOCNCPCOEAC_o *)0x0)) {
      EIABCPKDEBD__DGPOFACHGMP
                ((System_Xml_XmlNode_o *)JHMENEKPIBO,
                 (pJVar5->fields).super._OLIGHNIEIGK_k__BackingField,(MethodInfo *)0x0);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (Roster_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 == (Roster_o *)0x0) goto LAB_033f5a4c;
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
    }
    return;
  }
LAB_033f5a4c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CFPDPJKHALN(Action<FKNCNNOOOIO> CJNHFNHJHPE)  [RVA 0x32F5A50]
// MapButtonController$$CFPDPJKHALN @ RVA 0x32F5A50

void MapButtonController__CFPDPJKHALN
               (MapButtonController_o *__this,System_Action_FKNCNNOOOIO__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FKNCNNOOOIO__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FKNCNNOOOIO__o *pSVar5;
  System_Action_FKNCNNOOOIO__o **ppSVar6;
  System_Action_FKNCNNOOOIO__o *source;
  
  if ((DAT_04567688 & 1) == 0) {
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    DAT_04567688 = 1;
  }
  ppSVar6 = &(__this->fields).KLCCBGKNCBD;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FKNCNNOOOIO>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FKNCNNOOOIO>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FKNCNNOOOIO__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public List<FKNCNNOOOIO> CIIADCLDDAD()  [RVA 0x32F5B00]
// MapButtonController$$CIIADCLDDAD @ RVA 0x32F5B00

System_Collections_Generic_List_FKNCNNOOOIO__o *
MapButtonController__CIIADCLDDAD(MapButtonController_o *__this,MethodInfo *method)

{
  System_Predicate_FKNCNNOOOIO__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar2;
  System_Predicate_FKNCNNOOOIO__o *match;
  
  if ((DAT_04567689 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_FindAll__);
    FUN_01bab630(&System_Predicate<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&Method_NCNJEIBHGBH_<>c_GBOKLPBABJO__);
    FUN_01bab630(&MapButtonController_<>c_TypeInfo);
    DAT_04567689 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).JODEDMLAIEG;
  if ((MapButtonController_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MapButtonController_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = MapButtonController_<>c_TypeInfo->static_fields->__9__28_0;
  if (match == (System_Predicate_FKNCNNOOOIO__o *)0x0) {
    if ((MapButtonController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MapButtonController_<>c_TypeInfo,method);
    }
    match = (System_Predicate_FKNCNNOOOIO__o *)
            thunk_FUN_01bda818(System_Predicate<FKNCNNOOOIO>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &MapButtonController_<>c_TypeInfo->static_fields->__9__28_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (pSVar2 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
    pSVar2 = (System_Collections_Generic_List_FKNCNNOOOIO__o *)
             System_Collections_Generic_List<object>__FindAll
                       ((System_Collections_Generic_List_object__o *)pSVar2,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<FKNCNNOOOIO>_FindAll__);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IKAHNHPAIIC(Action<string> CJNHFNHJHPE)  [RVA 0x32F5C04]
// MapButtonController$$IKAHNHPAIIC @ RVA 0x32F5C04

void MapButtonController__IKAHNHPAIIC
               (MapButtonController_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *source;
  
  if ((DAT_0456768a & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_0456768a = 1;
  }
  ppSVar6 = &(__this->fields).FBENJEIDACA;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void DFBAIPNBPLB()  [RVA 0x32F5CB4]
// MapButtonController$$DFBAIPNBPLB @ RVA 0x32F5CB4

void MapButtonController__DFBAIPNBPLB(MapButtonController_o *__this,MethodInfo *method)

{
  DialogsOpener__KLBIPGNFIFM((MethodInfo *)0x0);
  return;
}


// ===== public void BDNPBMBKLKE(Action<FKNCNNOOOIO> CJNHFNHJHPE)  [RVA 0x32F5CBC]
// MapButtonController$$BDNPBMBKLKE @ RVA 0x32F5CBC

void MapButtonController__BDNPBMBKLKE
               (MapButtonController_o *__this,System_Action_FKNCNNOOOIO__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FKNCNNOOOIO__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FKNCNNOOOIO__o *pSVar5;
  System_Action_FKNCNNOOOIO__o *source;
  
  if ((DAT_0456768b & 1) == 0) {
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    DAT_0456768b = 1;
  }
  source = (__this->fields).HKBOCMKKIOI;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FKNCNNOOOIO>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FKNCNNOOOIO>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FKNCNNOOOIO__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private MapButton BGGKNPJBECD(GameObject KCAHJMFOIAG, HOOAAGABMBL IHGFKLOLPOK, string JHDEDPMNOOJ, long DHOANICNIBD)  [RVA 0x32F3B04]
// MapButtonController$$BGGKNPJBECD @ RVA 0x32F3B04

Nekki_SF2_GUI_Map_MapButton_o *
MapButtonController__BGGKNPJBECD
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,HOOAAGABMBL_o *IHGFKLOLPOK,
          System_String_o *JHDEDPMNOOJ,int64_t DHOANICNIBD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *pSVar3;
  FKNCNNOOOIO_o *__this_02;
  System_String_o **ppSVar4;
  UnityEngine_GameObject_o *__this_03;
  Nekki_SF2_GUI_Map_MapButton_o *__this_04;
  LIDDCJFOOOI_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  System_String_array *pSVar5;
  UnityEngine_Events_UnityEvent_o *__this_06;
  
  if ((DAT_0456768c & 1) == 0) {
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&Method_NCNJEIBHGBH_KNIFJALFKHG_JMGLHOGGKJL__);
    FUN_01bab630(&MapButtonController_KNIFJALFKHG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12931/*"Textures/buttons/map/"*/);
    FUN_01bab630(&StringLiteral_16224/*"_sale.png"*/);
    DAT_0456768c = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(MapButtonController_KNIFJALFKHG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = (__this->fields).PAFEHLCLKEC;
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      uVar1 = (__this_01->fields)._size;
      *(uint *)&__this_00[1].monitor = uVar1;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar5 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar5 != (System_String_array *)0x0) {
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = JHDEDPMNOOJ;
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,JHDEDPMNOOJ);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)JHDEDPMNOOJ,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
          pSVar3 = System_String__Concat
                             (StringLiteral_12931/*"Textures/buttons/map/"*/,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField
                              ,StringLiteral_16224/*"_sale.png"*/,(MethodInfo *)0x0);
          __this_02 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
          FKNCNNOOOIO___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 != (FKNCNNOOOIO_o *)0x0) {
            (__this_02->fields).AIDMEFDEOLJ = 1;
            (__this_02->fields).ALLCFABAGOB = DHOANICNIBD;
            (__this_02->fields).JIJLBFGKNJK = (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField;
            thunk_FUN_01c20e04();
            ppSVar4 = &(__this_02->fields).KPDPJONADPJ;
            *ppSVar4 = pSVar3;
            thunk_FUN_01c20e04(ppSVar4,pSVar3);
            (__this_02->fields).OEFBIKEMBOF = true;
            (__this_02->fields).JHFAAGIPDAJ = (IHGFKLOLPOK->fields)._KNNLLCNGLGO_k__BackingField;
            thunk_FUN_01c20e04();
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_03 = (UnityEngine_GameObject_o *)
                        UnityEngine_Object__Instantiate<object>
                                  ((Il2CppObject *)KCAHJMFOIAG,
                                   Method_UnityEngine_Object_Instantiate<GameObject>__);
            if ((__this_03 != (UnityEngine_GameObject_o *)0x0) &&
               (__this_04 = (Nekki_SF2_GUI_Map_MapButton_o *)
                            UnityEngine_GameObject__GetComponent<object>
                                      (__this_03,
                                       Method_UnityEngine_GameObject_GetComponent<MapButton>__),
               __this_04 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0)) {
              Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo(__this_04,__this_02,(MethodInfo *)0x0);
              __this_05 = (__this->fields).GNMGOPAABKE;
              if (__this_05 != (LIDDCJFOOOI_o *)0x0) {
                LIDDCJFOOOI__GFECOLFOILC(__this_05,__this_04,true,(MethodInfo *)0x0);
                __this_06 = (UnityEngine_Events_UnityEvent_o *)(__this_04->fields).super.m_OnClick;
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_06 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_06,call,(MethodInfo *)0x0);
                  return __this_04;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PEABBFJGFKC(string BGCBJECODII)  [RVA 0x32F12C8]
// MapButtonController$$PEABBFJGFKC @ RVA 0x32F12C8

void MapButtonController__PEABBFJGFKC(MapButtonController_o *__this,System_String_o *BGCBJECODII,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  JBGPNJEDALF_o *__this_00;
  BCGLDKLKKDA_o *HBHPFKJMGCK;
  BCGLDKLKKDA_o *__this_01;
  System_Collections_Generic_List_BCGLDKLKKDA__o *GGBBGNMJIEI;
  JOAIBHHONIM_o *__this_02;
  GCPFDLNAFDF_c *pGVar6;
  BCGLDKLKKDA_array *pBVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_0456768d & 1) == 0) {
    FUN_01bab630(&BCGLDKLKKDA_TypeInfo);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&JOAIBHHONIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_NewsDialog_TypeInfo);
    DAT_0456768d = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar4 != (GCPFDLNAFDF_o *)0x0) {
    pGVar6 = pGVar4->klass;
    uVar1._0_1_ = (pGVar6->_2).rank;
    uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pGVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar5 = pGVar6->vtable + (*piVar9 + 3);
          goto LAB_033f13cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,HFHIKPAKJFG_TypeInfo,3);
LAB_033f13cc:
    __this_00 = (JBGPNJEDALF_o *)(*pVVar5->methodPtr)(pGVar4,pVVar5->method);
    if (__this_00 != (JBGPNJEDALF_o *)0x0) {
      HBHPFKJMGCK = JBGPNJEDALF__KKCADOCOFFP(__this_00,BGCBJECODII,(MethodInfo *)0x0);
      if (HBHPFKJMGCK == (BCGLDKLKKDA_o *)0x0) {
        HCAICJLDDJO__MPOLDGKHPMF(6,BGCBJECODII,(MethodInfo *)0x0);
        return;
      }
      __this_01 = (BCGLDKLKKDA_o *)thunk_FUN_01bda818(BCGLDKLKKDA_TypeInfo);
      BCGLDKLKKDA___ctor(__this_01,HBHPFKJMGCK,(MethodInfo *)0x0);
      GGBBGNMJIEI = (System_Collections_Generic_List_BCGLDKLKKDA__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)GGBBGNMJIEI,
                 Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
      lVar3 = Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__;
      if (GGBBGNMJIEI != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
        pBVar7 = (GGBBGNMJIEI->fields)._items;
        (GGBBGNMJIEI->fields)._version = (GGBBGNMJIEI->fields)._version + 1;
        if (pBVar7 != (BCGLDKLKKDA_array *)0x0) {
          uVar2 = (GGBBGNMJIEI->fields)._size;
          if (uVar2 < (uint)pBVar7->max_length) {
            (GGBBGNMJIEI->fields)._size = uVar2 + 1;
            pBVar7->m_Items[(int)uVar2] = __this_01;
            thunk_FUN_01c20e04(pBVar7->m_Items + (int)uVar2,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)GGBBGNMJIEI,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          __this_02 = (JOAIBHHONIM_o *)thunk_FUN_01bda818(JOAIBHHONIM_TypeInfo);
          JOAIBHHONIM___ctor(__this_02,GGBBGNMJIEI,(MethodInfo *)0x0);
          DialogsOpener__HMCOHIKNIJP(__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MapButtonController AIHNLLGNBLC()  [RVA 0x32F5D74]
// MapButtonController$$AIHNLLGNBLC @ RVA 0x32F5D74

MapButtonController_o * MapButtonController__AIHNLLGNBLC(MethodInfo *method)

{
  MapButtonController_o *pNVar1;
  undefined1 auVar2 [16];
  
  if ((DAT_0456768e & 1) == 0) {
    FUN_01bab630(&MapButtonController_TypeInfo);
    DAT_0456768e = 1;
  }
  pNVar1 = MapButtonController_TypeInfo->static_fields->KNOHKIKFEBL;
  if (pNVar1 == (MapButtonController_o *)0x0) {
    auVar2 = thunk_FUN_01bda818();
    pNVar1 = auVar2._0_8_;
    MapButtonController___ctor(pNVar1,auVar2._8_8_);
    MapButtonController_TypeInfo->static_fields->KNOHKIKFEBL = pNVar1;
    thunk_FUN_01c20e04(MapButtonController_TypeInfo->static_fields,pNVar1);
    pNVar1 = MapButtonController_TypeInfo->static_fields->KNOHKIKFEBL;
  }
  return pNVar1;
}


// ===== private MapButton CHNLGNGBPIN(GameObject KCAHJMFOIAG, HOOAAGABMBL IHGFKLOLPOK, NMAHEBEALAB ABAGBODPCCP)  [RVA 0x32F24F4]
// MapButtonController$$CHNLGNGBPIN @ RVA 0x32F24F4

Nekki_SF2_GUI_Map_MapButton_o *
MapButtonController__CHNLGNGBPIN
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,HOOAAGABMBL_o *IHGFKLOLPOK,
          NMAHEBEALAB_o *ABAGBODPCCP,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  FKNCNNOOOIO_o *__this_02;
  int64_t iVar2;
  System_String_o **ppSVar3;
  UnityEngine_GameObject_o *__this_03;
  Nekki_SF2_GUI_Map_MapButton_o *__this_04;
  LIDDCJFOOOI_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  UnityEngine_Events_UnityEvent_o *__this_06;
  long lVar6;
  
  if ((DAT_0456768f & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&Method_NCNJEIBHGBH_HNOMJLNDEOJ_FEENPOLEPPJ__);
    FUN_01bab630(&MapButtonController_HNOMJLNDEOJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_12931/*"Textures/buttons/map/"*/);
    FUN_01bab630(&StringLiteral_16223/*"_sale"*/);
    DAT_0456768f = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(MapButtonController_HNOMJLNDEOJ_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00[1].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 1,__this);
  __this_01 = (__this->fields).PAFEHLCLKEC;
  if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (__this_01->fields)._size;
  *(uint *)&__this_00[1].monitor = uVar1;
  lVar6 = Method_System_Collections_Generic_List<string>_Add__;
  if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField;
  pSVar5 = (__this_01->fields)._items;
  (__this_01->fields)._version = (__this_01->fields)._version + 1;
  if (pSVar5 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (uVar1 < (uint)pSVar5->max_length) {
    (__this_01->fields)._size = uVar1 + 1;
    pSVar5->m_Items[(int)uVar1] = pSVar4;
    thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar4,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
  }
  pSVar4 = System_String__Concat
                     (StringLiteral_12931/*"Textures/buttons/map/"*/,(IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField,
                      StringLiteral_16223/*"_sale"*/,(MethodInfo *)0x0);
  __this_02 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
  FKNCNNOOOIO___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (__this_02->fields).AIDMEFDEOLJ = 2;
  if (ABAGBODPCCP == (NMAHEBEALAB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  lVar6 = (ABAGBODPCCP->fields).ALLCFABAGOB;
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar2 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
  (__this_02->fields).ALLCFABAGOB = lVar6 - iVar2;
  (__this_02->fields).JIJLBFGKNJK = (IHGFKLOLPOK->fields)._COIPKAKHDFP_k__BackingField;
  thunk_FUN_01c20e04();
  ppSVar3 = &(__this_02->fields).KPDPJONADPJ;
  *ppSVar3 = pSVar4;
  thunk_FUN_01c20e04(ppSVar3,pSVar4);
                    /* try { // try from 033f26fc to 034f2a9b has its CatchHandler @ 033f26fc
                       catch() { ... } // from try @ 033f26fc with catch @ 033f26fc
                       catch() { ... } // from try @ 033f2b44 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f2b74 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f2f4c with catch @ 033f26fc
                       catch() { ... } // from try @ 033f30c0 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f30d0 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f3124 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f3170 with catch @ 033f26fc
                       catch() { ... } // from try @ 033f321c with catch @ 033f26fc */
  (__this_02->fields).OEFBIKEMBOF = true;
  (__this_02->fields).JHFAAGIPDAJ = (IHGFKLOLPOK->fields)._KNNLLCNGLGO_k__BackingField;
  thunk_FUN_01c20e04();
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_03 = (UnityEngine_GameObject_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)KCAHJMFOIAG,
                         Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
    __this_04 = (Nekki_SF2_GUI_Map_MapButton_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (__this_03,Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    if (__this_04 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo(__this_04,__this_02,(MethodInfo *)0x0);
    __this_05 = (__this->fields).GNMGOPAABKE;
    if (__this_05 != (LIDDCJFOOOI_o *)0x0) {
      LIDDCJFOOOI__GFECOLFOILC(__this_05,__this_04,true,(MethodInfo *)0x0);
      __this_06 = (UnityEngine_Events_UnityEvent_o *)(__this_04->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_06 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_06,call,(MethodInfo *)0x0);
        return __this_04;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OAOEHBBPHND(Action<FKNCNNOOOIO> CJNHFNHJHPE)  [RVA 0x32F5E00]
// MapButtonController$$OAOEHBBPHND @ RVA 0x32F5E00

void MapButtonController__OAOEHBBPHND
               (MapButtonController_o *__this,System_Action_FKNCNNOOOIO__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FKNCNNOOOIO__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FKNCNNOOOIO__o *pSVar5;
  System_Action_FKNCNNOOOIO__o **ppSVar6;
  System_Action_FKNCNNOOOIO__o *a;
  
  if ((DAT_04567690 & 1) == 0) {
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    DAT_04567690 = 1;
  }
  ppSVar6 = &(__this->fields).ILGDOLCMDHA;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<FKNCNNOOOIO>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FKNCNNOOOIO>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FKNCNNOOOIO__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void GLDENAIADCG(Action<FKNCNNOOOIO> CJNHFNHJHPE)  [RVA 0x32F5EB0]
// MapButtonController$$GLDENAIADCG @ RVA 0x32F5EB0

void MapButtonController__GLDENAIADCG
               (MapButtonController_o *__this,System_Action_FKNCNNOOOIO__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FKNCNNOOOIO__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FKNCNNOOOIO__o *pSVar5;
  System_Action_FKNCNNOOOIO__o **ppSVar6;
  System_Action_FKNCNNOOOIO__o *a;
  
  if ((DAT_04567691 & 1) == 0) {
    FUN_01bab630(&System_Action<FKNCNNOOOIO>_TypeInfo);
    DAT_04567691 = 1;
  }
  ppSVar6 = &(__this->fields).KLCCBGKNCBD;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<FKNCNNOOOIO>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FKNCNNOOOIO>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FKNCNNOOOIO__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void JOCHGEBKLMM()  [RVA 0x32F5F60]
// MapButtonController$$JOCHGEBKLMM @ RVA 0x32F5F60

void MapButtonController__JOCHGEBKLMM(MapButtonController_o *__this,MethodInfo *method)

{
  ushort uVar1;
  KKEKKPIDGBK_o *pKVar2;
  VirtualInvokeData *pVVar3;
  long lVar4;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar5;
  MethodInfo *extraout_x1;
  KKEKKPIDGBK_c *pKVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04567692 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04567692 = 1;
    method = extraout_x1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MKFAKELPPAC_TypeInfo,method);
  }
  pKVar2 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pKVar2 != (KKEKKPIDGBK_o *)0x0) {
    pKVar6 = pKVar2->klass;
    uVar1._0_1_ = (pKVar6->_2).rank;
    uVar1._1_1_ = (pKVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pKVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar3 = pKVar6->vtable + (*piVar8 + 0x12);
          goto LAB_033f6028;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar2,KKEKKPIDGBK_TypeInfo,0x12);
LAB_033f6028:
    (*pVVar3->methodPtr)(pKVar2,pVVar3->method);
    lVar4 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8) !=
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__HideEventButtonNotificator
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar4 + 0xb8),(MethodInfo *)0x0);
      pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleQuests(pNVar5,0x2b,(MethodInfo *)0x0);
        pNVar5 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar5 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__RunQuests(pNVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EFGGJLPACCE(Action<string> CJNHFNHJHPE)  [RVA 0x32F60A8]
// MapButtonController$$EFGGJLPACCE @ RVA 0x32F60A8

void MapButtonController__EFGGJLPACCE
               (MapButtonController_o *__this,System_Action_string__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__o *a;
  
  if ((DAT_04567693 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    DAT_04567693 = 1;
  }
  ppSVar6 = &(__this->fields).BKGHBFHIPHK;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<string>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<string>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_string__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private bool OMFIAFKMCMF(HOOAAGABMBL IHGFKLOLPOK)  [RVA 0x32F23F0]
// MapButtonController$$OMFIAFKMCMF @ RVA 0x32F23F0

bool MapButtonController__OMFIAFKMCMF(MapButtonController_o *__this,HOOAAGABMBL_o *IHGFKLOLPOK,MethodInfo *method)

{
  bool_conflict bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  Roster_o *__this_00;
  
                    /* try { // try from 033f23f0 to 034f23fb has its CatchHandler @ 033ef1b0 */
                    /* try { // try from 033f23fc to 034f2403 has its CatchHandler @ 033f2404 */
                    /* catch() { ... } // from try @ 033f1fdc with catch @ 033f2404
                       catch() { ... } // from try @ 033f20b4 with catch @ 033f2404
                       catch() { ... } // from try @ 033f223c with catch @ 033f2404
                       catch() { ... } // from try @ 033f2314 with catch @ 033f2404
                       catch() { ... } // from try @ 033f2380 with catch @ 033f2404
                       catch() { ... } // from try @ 033f23fc with catch @ 033f2404 */
  if ((DAT_04567694 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567694 = 1;
  }
  if (IHGFKLOLPOK == (HOOAAGABMBL_o *)0x0) {
    bVar4 = false;
  }
  else {
    bVar2 = (*(IHGFKLOLPOK->klass->vtable)._4_OIEONLNFHKC.methodPtr)
                      (IHGFKLOLPOK,(IHGFKLOLPOK->klass->vtable)._4_OIEONLNFHKC.method);
    bVar1 = (IHGFKLOLPOK->fields)._ILHGDFFOGHP_k__BackingField;
    bVar3 = (*(IHGFKLOLPOK->klass->vtable)._5_EFLKILFFJKH.methodPtr)
                      (IHGFKLOLPOK,(IHGFKLOLPOK->klass->vtable)._5_EFLKILFFJKH.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar4 = Roster__MHLDNEBLNJG
                      (__this_00,(IHGFKLOLPOK->fields)._ILMMODKJGFK_k__BackingField,
                       (MethodInfo *)0x0);
    bVar4 = (bool)(bVar2 & bVar1 != false & (bVar3 ^ 1) & bVar4);
  }
  return bVar4;
}


// ===== public MapButton CANNODKGOME(GameObject KCAHJMFOIAG)  [RVA 0x32F4D70]
// MapButtonController$$CANNODKGOME @ RVA 0x32F4D70

Nekki_SF2_GUI_Map_MapButton_o *
MapButtonController__CANNODKGOME
          (MapButtonController_o *__this,UnityEngine_GameObject_o *KCAHJMFOIAG,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  FKNCNNOOOIO_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Map_MapButton_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  KKEKKPIDGBK_o *pKVar3;
  VirtualInvokeData *pVVar4;
  KKEKKPIDGBK_c *pKVar5;
  ulong uVar6;
  int32_t *piVar7;
  UnityEngine_Events_UnityEvent_o *__this_03;
  System_String_o **ppSVar8;
  
  if ((DAT_04567695 & 1) == 0) {
                    /* try { // try from 033f4d9c to 034f4dc3 has its CatchHandler @ 033f4f88 */
    FUN_01bab630(&FKNCNNOOOIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MapButton>__);
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&Method_NCNJEIBHGBH_JOCHGEBKLMM__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 033f4df8 to 034f4e23 has its CatchHandler @ 033f4f84 */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_21974/*"video_ad_map"*/);
    FUN_01bab630(&StringLiteral_12934/*"Textures/buttons/map/video_ad_map.png"*/);
    DAT_04567695 = 1;
  }
  __this_00 = (FKNCNNOOOIO_o *)thunk_FUN_01bda818(FKNCNNOOOIO_TypeInfo);
  FKNCNNOOOIO___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (FKNCNNOOOIO_o *)0x0) {
                    /* try { // try from 033f4e58 to 034f4e63 has its CatchHandler @ 033f4f7c */
    (__this_00->fields).JIJLBFGKNJK = StringLiteral_21974/*"video_ad_map"*/;
    thunk_FUN_01c20e04();
                    /* try { // try from 033f4e64 to 034f4f5f has its CatchHandler @ 033f4b64 */
    (__this_00->fields).AIDMEFDEOLJ = 1;
    ppSVar8 = &(__this_00->fields).KPDPJONADPJ;
    *ppSVar8 = StringLiteral_12934/*"Textures/buttons/map/video_ad_map.png"*/;
    thunk_FUN_01c20e04(ppSVar8);
    (__this_00->fields).OEFBIKEMBOF = true;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)KCAHJMFOIAG,
                           Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_02 = (Nekki_SF2_GUI_Map_MapButton_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_01,Method_UnityEngine_GameObject_GetComponent<MapButton>__),
       __this_02 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0)) {
      Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo(__this_02,__this_00,(MethodInfo *)0x0);
      __this_03 = (UnityEngine_Events_UnityEvent_o *)(__this_02->fields).super.m_OnClick;
      call = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
        if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = MKFAKELPPAC__EAONJAHHPDM((MethodInfo *)0x0);
        if (bVar2) {
          if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pKVar3 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
          if (pKVar3 == (KKEKKPIDGBK_o *)0x0) goto LAB_033f4fe0;
          pKVar5 = pKVar3->klass;
          uVar1._0_1_ = (pKVar5->_2).rank;
          uVar1._1_1_ = (pKVar5->_2).minimumAlignment;
          uVar6 = (ulong)uVar1;
                    /* try { // try from 033f4f60 to 034f4f67 has its CatchHandler @ 033f4f80 */
          if (uVar6 != 0) {
                    /* try { // try from 033f4f68 to 034f4f6b has its CatchHandler @ 033f4b64 */
                    /* try { // try from 033f4f6c to 034f4f6f has its CatchHandler @ 033f4f78 */
            piVar7 = &((pKVar5->_1).interfaceOffsets)->offset;
            do {
                    /* try { // try from 033f4f70 to 034f4f97 has its CatchHandler @ 033f4b64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4f6c with catch @ 033f4f78
                        */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                  (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
                    /* try { // try from 033f4f98 to 034f4f9b has its CatchHandler @ 033f4fb0 */
                pVVar4 = pKVar5->vtable + (*piVar7 + 6);
                goto LAB_033f4fa8;
              }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4e58 with catch @ 033f4f7c
                        */
              uVar6 = uVar6 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4f60 with catch @ 033f4f80
                        */
              piVar7 = piVar7 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4df8 with catch @ 033f4f84
                        */
            } while (uVar6 != 0);
          }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f4d9c with catch @ 033f4f88
                        */
          pVVar4 = (VirtualInvokeData *)FUN_01b81914(pKVar3,KKEKKPIDGBK_TypeInfo,6);
LAB_033f4fa8:
                    /* catch() { ... } // from try @ 033f4f98 with catch @ 033f4fb0 */
          uVar6 = (*pVVar4->methodPtr)(pKVar3,pVVar4->method);
          if ((uVar6 & 1) != 0) {
                    /* try { // try from 033f4fb8 to 034f501f has its CatchHandler @ 033f5034 */
            Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled(__this_02,true,(MethodInfo *)0x0);
          }
        }
        return __this_02;
      }
    }
  }
LAB_033f4fe0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCABDEFGJAH()  [RVA 0x32F6158]
// MapButtonController$$JCABDEFGJAH @ RVA 0x32F6158

void MapButtonController__JCABDEFGJAH(MapButtonController_o *__this,MethodInfo *method)

{
  RaidConfig_o *__this_00;
  RaidConfig_ENBCJNLAHAC_o *IOOJAJAPMBM;
  NDPMLPGANCI_o *__this_01;
  FAIJGJCCKJC_o *__this_02;
  FFHKCJAOPLI_o *__this_03;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567696 & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_13770/*"TicketMysteryBox"*/);
    DAT_04567696 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (__this_00 != (RaidConfig_o *)0x0) {
    IOOJAJAPMBM = RaidConfig__DIFLKMKBENA(__this_00,StringLiteral_13770/*"TicketMysteryBox"*/,false,(MethodInfo *)0x0);
    __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    __this_02 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(FAIJGJCCKJC_TypeInfo);
    FAIJGJCCKJC___ctor(__this_02,IOOJAJAPMBM,(MethodInfo *)0x0);
    __this_03 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
    FFHKCJAOPLI___ctor(__this_03,8,(HOOAAGABMBL_o *)__this_02,(System_String_o *)0x0,
                       (System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this_01 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_01,4,(Il2CppObject *)__this_03,(System_Action_object__o *)0x0,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MJBJNBPCDCN(int OGPGLGPMEPD)  [RVA 0x32F6274]
// MapButtonController$$MJBJNBPCDCN @ RVA 0x32F6274

void MapButtonController__MJBJNBPCDCN(MapButtonController_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *BGCBJECODII;
  
  if ((DAT_04567697 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567697 = 1;
  }
  __this_00 = (__this->fields).PAFEHLCLKEC;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  BGCBJECODII = StringLiteral_1/*""*/;
  if (OGPGLGPMEPD < (__this_00->fields)._size) {
    method = Method_System_Collections_Generic_List<string>_get_Item__;
    BGCBJECODII = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,OGPGLGPMEPD,
                             (MethodInfo_26E4ADC *)
                             Method_System_Collections_Generic_List<string>_get_Item__);
  }
  MapButtonController__OANGGKCBAOJ(__this,BGCBJECODII,method);
  return;
}

