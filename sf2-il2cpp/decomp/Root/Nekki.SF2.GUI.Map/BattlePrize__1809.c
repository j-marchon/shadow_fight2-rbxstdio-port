// TypeDefIndex 1809
// Namespace: Nekki.SF2.GUI.Map
// public class BattlePrize : MonoBehaviour
// Fields:
//   public const float BATTLE_GOLD_SIZE = 40;
//   private GameObject _prizeElemPrefab; // 0x20
//   private HorizontalLayoutGroup _layoutGroup; // 0x28
//   private ResolutionImage _itemIcon; // 0x30
//   private float _spacing; // 0x38
//   private List<BattlePrizeElement> JMAMFIMIIFA; // 0x40
//   private float MOOOFNAMCME; // 0x48
//   private float ECNFKOKNCDP; // 0x4C
//   private float NFEILIIMHKK; // 0x50
//   private bool KBIMEFPOLJB; // 0x54
//   private float DKDLLBENAFE; // 0x58
//   private int LFJGFLNMBMC; // 0x5C
//   private bool IKBBLGEBDGM; // 0x60

// ===== private void OnDestroy()  [RVA 0x3217FBC]
// Nekki.SF2.GUI.Map.BattlePrize$$OnDestroy @ RVA 0x3217FBC

void Nekki_SF2_GUI_Map_BattlePrize__OnDestroy
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BattlePrizeElement__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566ee3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    DAT_04566ee3 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JMAMFIMIIFA;
  if (__this_00 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Map_BattlePrize__AKOJCICPDFI
                (__this,(Nekki_SF2_GUI_Map_BattlePrizeElement_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void BIGGGNJDJMO()  [RVA 0x32181C8]
// Nekki.SF2.GUI.Map.BattlePrize$$BIGGGNJDJMO @ RVA 0x32181C8

void Nekki_SF2_GUI_Map_BattlePrize__BIGGGNJDJMO
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BattlePrizeElement__o *__this_00;
  UnityEngine_Component_o *__this_01;
  Il2CppObject *pIVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar2;
  UnityEngine_Transform_o *transform;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  int index;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04566ee4 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_get_Item__);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566ee4 = 1;
  }
  __this_00 = (__this->fields).JMAMFIMIIFA;
  (__this->fields).DKDLLBENAFE = 0.0;
  if (__this_00 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      fVar4 = 0.0;
    }
    else {
      index = 0;
      do {
        __this_01 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<BattlePrizeElement>_get_Item__
                              );
        if (__this_01 == (UnityEngine_Component_o *)0x0) goto LAB_03318354;
        fVar4 = (__this->fields).DKDLLBENAFE;
        pIVar1 = UnityEngine_Component__GetComponent<object>
                           (__this_01,Method_UnityEngine_Component_GetComponent<LayoutElement>__);
        if (pIVar1 == (Il2CppObject *)0x0) goto LAB_03318354;
        fVar3 = (float)(*pIVar1->klass->vtable[0x23].methodPtr)
                                 (pIVar1,pIVar1->klass->vtable[0x23].method);
        __this_00 = (__this->fields).JMAMFIMIIFA;
        fVar4 = fVar4 + fVar3 + (__this->fields)._spacing;
        (__this->fields).DKDLLBENAFE = fVar4;
        if (__this_00 == (System_Collections_Generic_List_BattlePrizeElement__o *)0x0)
        goto LAB_03318354;
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    pUVar2 = (__this->fields)._layoutGroup;
    fVar4 = fVar4 - (__this->fields)._spacing;
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
    (__this->fields).DKDLLBENAFE = fVar4;
    if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX(transform,0.0,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields)._layoutGroup;
      if (__this_02 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  (__this_02,(__this->fields)._spacing,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._layoutGroup;
        if (((pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
            (__this_03 = (UnityEngine_RectTransform_o *)
                         UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
            __this_03 != (UnityEngine_RectTransform_o *)0x0)) &&
           (__this_03->klass == UnityEngine_RectTransform_TypeInfo)) {
          fVar4 = (__this->fields).DKDLLBENAFE;
          UVar5 = UnityEngine_RectTransform__get_rect(__this_03,(MethodInfo *)0x0);
          value.fields.y = UVar5.fields.m_Height;
          value.fields.x = fVar4;
          UnityEngine_RectTransform__set_sizeDelta(__this_03,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03318354:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(long DCDLMCEEOCC, long IPGOFHMGFOI, JHBHHHKEFOO NNHNNAKKKPL, float LFLFLNNAHFN, float MECEHFOLHIG, int NJBICBHLOMO)  [RVA 0x3218358]
// Nekki.SF2.GUI.Map.BattlePrize$$Init @ RVA 0x3218358

void Nekki_SF2_GUI_Map_BattlePrize__Init
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,int64_t DCDLMCEEOCC,int64_t IPGOFHMGFOI,
               JHBHHHKEFOO_o *NNHNNAKKKPL,float LFLFLNNAHFN,float MECEHFOLHIG,int32_t NJBICBHLOMO,
               MethodInfo *method)

{
  int32_t length;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_BattlePrizeElement__o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Nekki_SF2_GUI_Map_BattlePrizeElement_o *pNVar5;
  System_Collections_Generic_List_HFNLANEMDFI__o *__this_01;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_02;
  HBNENINHPGF_o *pHVar6;
  MethodInfo *pMVar7;
  System_Collections_Generic_List_EFOFNLEFLNH__o *__this_03;
  MGNPHCAAEIO_MACDOBFPDPP_o *__this_04;
  HGLELMDNMMA_o *__this_05;
  System_String_o *pSVar8;
  System_Collections_Generic_List_OCOEAJMJEOP__o *__this_06;
  DOPEEDABNEK_o *__this_07;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_08;
  IGFGDDANEPE_o *pIVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ACHLOMELAJE_o *pAVar10;
  undefined4 in_register_00005004;
  System_Collections_Generic_List_Enumerator_T__o local_108;
  System_Collections_Generic_List_Enumerator_T__o local_f0;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  pMVar7 = (MethodInfo *)IPGOFHMGFOI;
  if ((DAT_04566ee5 & 1) == 0) {
    FUN_01bab630(CONCAT44(in_register_00005004,LFLFLNNAHFN),
                 &Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EFOFNLEFLNH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HFNLANEMDFI>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
    DAT_04566ee5 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  local_f0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f0.fields._index = 0;
  local_f0.fields._version = 0;
  local_f0.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).JMAMFIMIIFA;
  if (pSVar3 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_108,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    local_90.fields._index = local_108.fields._index;
    local_90.fields._version = local_108.fields._version;
    local_90.fields._list = local_108.fields._list;
    local_90.fields._current = local_108.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__
                             ), bVar2) {
      if ((HFNLANEMDFI_o *)local_90.fields._current == (HFNLANEMDFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_90.fields._current,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar4,false,pMVar7);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    pSVar3 = (__this->fields).JMAMFIMIIFA;
    if (pSVar3 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields)._itemIcon;
      if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        (__this->fields).MOOOFNAMCME = MECEHFOLHIG;
        pSVar8 = StringLiteral_9095/*"MiscSprites.ruby"*/;
        (__this->fields).DKDLLBENAFE = 0.0;
        if (0 < DCDLMCEEOCC) {
          pUVar4 = (__this->fields)._prizeElemPrefab;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pUVar4 = (UnityEngine_GameObject_o *)
                   UnityEngine_Object__Instantiate<object>
                             ((Il2CppObject *)pUVar4,
                              Method_UnityEngine_Object_Instantiate<GameObject>__);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_03318acc;
          pNVar5 = (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar4,
                              Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__);
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
          pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar10 == (ACHLOMELAJE_o *)0x0) ||
             (pNVar5 == (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0)) goto LAB_03318acc;
          Nekki_SF2_GUI_Map_BattlePrizeElement__Init
                    (pNVar5,(pAVar10->fields).FAAJGHKHEBI,DCDLMCEEOCC,NJBICBHLOMO,1.0,
                     (MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP(__this,pNVar5,(MethodInfo *)DCDLMCEEOCC);
        }
        if (0 < IPGOFHMGFOI) {
          pUVar4 = (__this->fields)._prizeElemPrefab;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pUVar4 = (UnityEngine_GameObject_o *)
                   UnityEngine_Object__Instantiate<object>
                             ((Il2CppObject *)pUVar4,
                              Method_UnityEngine_Object_Instantiate<GameObject>__);
          if ((pUVar4 == (UnityEngine_GameObject_o *)0x0) ||
             (pNVar5 = (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (pUVar4,
                                  Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__),
             pNVar5 == (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0)) goto LAB_03318acc;
          Nekki_SF2_GUI_Map_BattlePrizeElement__Init
                    (pNVar5,pSVar8,IPGOFHMGFOI,NJBICBHLOMO,1.0,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP(__this,pNVar5,(MethodInfo *)IPGOFHMGFOI);
        }
        if ((NNHNNAKKKPL != (JHBHHHKEFOO_o *)0x0) &&
           (__this_01 = (NNHNNAKKKPL->fields).GMCEHJAIFBJ,
           __this_01 != (System_Collections_Generic_List_HFNLANEMDFI__o *)0x0)) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_108,(System_Collections_Generic_List_object__o *)__this_01,
                     Method_System_Collections_Generic_List<HFNLANEMDFI>_GetEnumerator__);
          local_b0.fields._index = local_108.fields._index;
          local_b0.fields._version = local_108.fields._version;
          local_b0.fields._list = local_108.fields._list;
          local_b0.fields._current = local_108.fields._current;
          while( true ) {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_b0,
                               Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_MoveNext__
                              );
            pIVar1 = local_b0.fields._current;
            if (!bVar2) break;
            if ((HFNLANEMDFI_o *)local_b0.fields._current == (HFNLANEMDFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((((HFNLANEMDFI_Fields *)((long)local_b0.fields._current + 0x10))->super).JGPCHLGAPJD
                != false) {
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
              if (__this_02 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pHVar6 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO
                                 (__this_02,
                                  ((HFNLANEMDFI_Fields *)((long)pIVar1 + 0x10))->JIJLBFGKNJK,
                                  (MethodInfo *)0x0);
              if (pHVar6 != (HBNENINHPGF_o *)0x0) {
                pMVar7 = (MethodInfo *)
                         HFNLANEMDFI__OKHNKAEHOHG((HFNLANEMDFI_o *)pIVar1,(MethodInfo *)0x0);
                pUVar4 = (__this->fields)._prizeElemPrefab;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pUVar4 = (UnityEngine_GameObject_o *)
                         UnityEngine_Object__Instantiate<object>
                                   ((Il2CppObject *)pUVar4,
                                    Method_UnityEngine_Object_Instantiate<GameObject>__);
                if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pNVar5 = (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)
                         UnityEngine_GameObject__GetComponent<object>
                                   (pUVar4,
                                    Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__
                                   );
                if (pNVar5 == (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                Nekki_SF2_GUI_Map_BattlePrizeElement__Init
                          (pNVar5,(pHVar6->fields)._PGCEKJLODEJ_k__BackingField,(int64_t)pMVar7,
                           NJBICBHLOMO,1.0,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP(__this,pNVar5,pMVar7);
              }
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_b0,
                     Method_System_Collections_Generic_List_Enumerator<HFNLANEMDFI>_Dispose__);
          __this_03 = (NNHNNAKKKPL->fields).OJFMFMHCPOA;
          if (__this_03 != (System_Collections_Generic_List_EFOFNLEFLNH__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_108,(System_Collections_Generic_List_object__o *)__this_03,
                       Method_System_Collections_Generic_List<EFOFNLEFLNH>_GetEnumerator__);
            local_d0.fields._index = local_108.fields._index;
            local_d0.fields._version = local_108.fields._version;
            local_d0.fields._list = local_108.fields._list;
            local_d0.fields._current = local_108.fields._current;
            while( true ) {
              bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_d0,
                                 Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_MoveNext__
                                );
              pIVar1 = local_d0.fields._current;
              if (!bVar2) break;
              if ((HFNLANEMDFI_o *)local_d0.fields._current == (HFNLANEMDFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((((HFNLANEMDFI_Fields *)((long)local_d0.fields._current + 0x10))->super).
                  JGPCHLGAPJD != false) {
                if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                __this_04 = MGNPHCAAEIO_TypeInfo->static_fields->JIKLPLFKEDI;
                if (__this_04 == (MGNPHCAAEIO_MACDOBFPDPP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                __this_05 = MGNPHCAAEIO_MACDOBFPDPP__HNCMGLINNDO
                                      (__this_04,
                                       ((HFNLANEMDFI_Fields *)((long)pIVar1 + 0x10))->JIJLBFGKNJK,
                                       (MethodInfo *)0x0);
                if (__this_05 != (HGLELMDNMMA_o *)0x0) {
                  pMVar7 = (MethodInfo *)
                           (long)(int)((HFNLANEMDFI_Fields *)((long)pIVar1 + 0x10))->AICMABLCDED;
                  pUVar4 = (__this->fields)._prizeElemPrefab;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pUVar4 = (UnityEngine_GameObject_o *)
                           UnityEngine_Object__Instantiate<object>
                                     ((Il2CppObject *)pUVar4,
                                      Method_UnityEngine_Object_Instantiate<GameObject>__);
                  if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pNVar5 = (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)
                           UnityEngine_GameObject__GetComponent<object>
                                     (pUVar4,
                                      Method_UnityEngine_GameObject_GetComponent<BattlePrizeElement>__
                                     );
                  pSVar8 = HGLELMDNMMA__IEOHBNIIMFL(__this_05,(MethodInfo *)0x0);
                  if (pNVar5 == (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  Nekki_SF2_GUI_Map_BattlePrizeElement__Init
                            (pNVar5,pSVar8,(int64_t)pMVar7,NJBICBHLOMO,1.0,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP(__this,pNVar5,pMVar7);
                }
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_d0,
                       Method_System_Collections_Generic_List_Enumerator<EFOFNLEFLNH>_Dispose__);
            Nekki_SF2_GUI_Map_BattlePrize__BIGGGNJDJMO(__this,method_00);
            Nekki_SF2_GUI_Map_BattlePrize__ODOKFKCAILG(__this,method_01);
            __this_06 = (NNHNNAKKKPL->fields).GHAAKPDHIJJ;
            if (__this_06 != (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_108,(System_Collections_Generic_List_object__o *)__this_06,
                         Method_System_Collections_Generic_List<OCOEAJMJEOP>_GetEnumerator__);
              local_f0.fields._index = local_108.fields._index;
              local_f0.fields._version = local_108.fields._version;
              local_f0.fields._list = local_108.fields._list;
              local_f0.fields._current = local_108.fields._current;
              do {
                do {
                  bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (&local_f0,
                                     Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_MoveNext__
                                    );
                  pIVar1 = local_f0.fields._current;
                  if (!bVar2) goto LAB_03318a60;
                  if ((HFNLANEMDFI_o *)local_f0.fields._current == (HFNLANEMDFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                } while ((((HFNLANEMDFI_Fields *)((long)local_f0.fields._current + 0x10))->super).
                         JGPCHLGAPJD == false);
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
                __this_07 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                if (__this_07 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN
                                        (__this_07,
                                         ((HFNLANEMDFI_Fields *)((long)pIVar1 + 0x10))->JIJLBFGKNJK,
                                         (MethodInfo *)0x0);
                if (DAT_04565b7d == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04565b7d = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if (pAVar10 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                __this_08 = (pAVar10->fields).OIDPLCLELEN;
                if (__this_08 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pMVar7 = (MethodInfo *)0x0;
                pIVar9 = GGHCLMEFIGO__JNFIBDBHNOA(__this_08,IKKAMAMLIKA,(MethodInfo *)0x0);
              } while (pIVar9 != (IGFGDDANEPE_o *)0x0);
              Nekki_SF2_GUI_Map_BattlePrize__AddItem(__this,IKKAMAMLIKA,pMVar7);
LAB_03318a60:
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_f0,
                         Method_System_Collections_Generic_List_Enumerator<OCOEAJMJEOP>_Dispose__);
              return;
            }
          }
        }
      }
    }
  }
LAB_03318acc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AddItem(HOOAAGABMBL IHGFKLOLPOK)  [RVA 0x3218FD0]
// Nekki.SF2.GUI.Map.BattlePrize$$AddItem @ RVA 0x3218FD0

void Nekki_SF2_GUI_Map_BattlePrize__AddItem
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,HOOAAGABMBL_o *IHGFKLOLPOK,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Collections_Generic_List_BattlePrizeElement__o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566ee6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo);
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
    DAT_04566ee6 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((IHGFKLOLPOK->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11751/*"Seal"*/,
                       (MethodInfo *)0x0);
    if (bVar2) {
      __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._itemIcon;
      if (__this_01 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo)) {
          Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(__this_01,(MethodInfo *)0x0);
          __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._itemIcon;
        }
      }
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
    }
    else {
      __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._itemIcon;
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
    }
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
      *(System_String_o **)&(__this_01->fields).super.super.m_PixelsPerUnitMultiplier = pSVar3;
      thunk_FUN_01c20e04(&(__this_01->fields).super.super.m_PixelsPerUnitMultiplier);
      pNVar4 = (__this->fields)._itemIcon;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (pNVar4,(IHGFKLOLPOK->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._itemIcon;
        if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._itemIcon;
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            UnityEngine_UI_Image__set_preserveAspect
                      ((UnityEngine_UI_Image_o *)pNVar4,true,(MethodInfo *)0x0);
            __this_00 = (__this->fields).JMAMFIMIIFA;
            if (__this_00 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                         Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__)
              ;
              while( true ) {
                bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_38,
                                   Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__
                                  );
                if (!bVar2) {
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (&local_38,
                             Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__
                            );
                  Nekki_SF2_GUI_Map_BattlePrize__ODOKFKCAILG(__this,method_00);
                  return;
                }
                if ((UnityEngine_Component_o *)local_38.fields._current ==
                    (UnityEngine_Component_o *)0x0) break;
                pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)local_38.fields._current,
                                    (MethodInfo *)0x0);
                if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MLANLCMGNJF()  [RVA 0x3219278]
// Nekki.SF2.GUI.Map.BattlePrize$$MLANLCMGNJF @ RVA 0x3219278

void Nekki_SF2_GUI_Map_BattlePrize__MLANLCMGNJF
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Transform_o *transform;
  MethodInfo *extraout_x1;
  MOAHCJAFGNJ_DMJGKEDFAGF_o *pMVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04566ee7 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04566ee7 = 1;
    method = extraout_x1;
  }
  (__this->fields).LFJGFLNMBMC = (__this->fields).LFJGFLNMBMC + 1;
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MOAHCJAFGNJ_TypeInfo,method);
  }
  pMVar3 = MOAHCJAFGNJ_TypeInfo->static_fields->PIECBLBNNOP;
  if ((pMVar3 != (MOAHCJAFGNJ_DMJGKEDFAGF_o *)0x0) &&
     (pUVar1 = (__this->fields)._layoutGroup,
     pUVar1 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0)) {
    fVar4 = (pMVar3->fields).PLOLIDEDOEF;
    fVar5 = (pMVar3->fields).JDOIGKKGGDA;
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar1,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponent<RectTransform>__);
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._layoutGroup;
        if (pUVar1 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
          fVar5 = cosf(fVar5 * (float)(__this->fields).LFJGFLNMBMC);
          transform = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          UnityEngine_TransformExtensions__SetLocalPositionX
                    (transform,
                     fVar4 * ((UVar6.fields.m_Width - UVar7.fields.m_Width) / (fVar4 + fVar4)) *
                     fVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ODOKFKCAILG()  [RVA 0x3218EB0]
// Nekki.SF2.GUI.Map.BattlePrize$$ODOKFKCAILG @ RVA 0x3218EB0

void Nekki_SF2_GUI_Map_BattlePrize__ODOKFKCAILG
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  
  if ((DAT_04566ee8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566ee8 = 1;
  }
  __this_00 = (__this->fields)._layoutGroup;
  if (((__this_00 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
      (pUVar2 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
      pUVar2 != (UnityEngine_RectTransform_o *)0x0)) &&
     (pUVar2->klass == UnityEngine_RectTransform_TypeInfo)) {
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar2->klass == UnityEngine_RectTransform_TypeInfo)) {
      UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      (__this->fields).KBIMEFPOLJB = UVar5.fields.m_Width < UVar4.fields.m_Width;
      pNVar3 = (__this->fields)._itemIcon;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UVar5.fields.m_XMin,UVar5.fields.m_YMin,UVar5.fields.m_Width,
                           UVar5.fields.m_Height);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)pNVar3,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar3 = (__this->fields)._itemIcon;
      if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
        value.fields.y = (__this->fields).MOOOFNAMCME;
        value.fields.x = 500.0;
        UnityEngine_RectTransform__set_sizeDelta(pUVar2,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AKOJCICPDFI(BattlePrizeElement CJNHFNHJHPE)  [RVA 0x32180EC]
// Nekki.SF2.GUI.Map.BattlePrize$$AKOJCICPDFI @ RVA 0x32180EC

void Nekki_SF2_GUI_Map_BattlePrize__AKOJCICPDFI
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,
               Nekki_SF2_GUI_Map_BattlePrizeElement_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE_00;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04566ee9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrize_FAOOCIFKPEM__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ee9 = 1;
  }
  CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (CJNHFNHJHPE != (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0) {
    Nekki_SF2_GUI_Map_BattlePrizeElement__remove_OnRendered
              (CJNHFNHJHPE,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__Destroy((UnityEngine_Object_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x3219388]
// Nekki.SF2.GUI.Map.BattlePrize$$Update @ RVA 0x3219388

void Nekki_SF2_GUI_Map_BattlePrize__Update
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  if ((__this->fields).IKBBLGEBDGM != false) {
    (__this->fields).IKBBLGEBDGM = false;
    Nekki_SF2_GUI_Map_BattlePrize__BIGGGNJDJMO(__this,method);
    Nekki_SF2_GUI_Map_BattlePrize__ODOKFKCAILG(__this,method_00);
    method = extraout_x1;
  }
  if ((__this->fields).KBIMEFPOLJB != false) {
    Nekki_SF2_GUI_Map_BattlePrize__MLANLCMGNJF(__this,method);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x32193C8]
// Nekki.SF2.GUI.Map.BattlePrize$$.ctor @ RVA 0x32193C8

void Nekki_SF2_GUI_Map_BattlePrize___ctor
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BattlePrizeElement__o *__this_00;
  System_Collections_Generic_List_BattlePrizeElement__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566eea & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BattlePrizeElement>_TypeInfo);
    DAT_04566eea = 1;
    method = extraout_x1;
  }
  (__this->fields)._spacing = 20.0;
  __this_00 = (System_Collections_Generic_List_BattlePrizeElement__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BattlePrizeElement>_TypeInfo,method
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BattlePrizeElement>__ctor__);
  ppSVar1 = &(__this->fields).JMAMFIMIIFA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).MOOOFNAMCME = -1.0;
  (__this->fields).LFJGFLNMBMC = 0x168;
  (__this->fields).IKBBLGEBDGM = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void CCLACGABBDP(BattlePrizeElement NMCCKJIIBKK)  [RVA 0x3218D18]
// Nekki.SF2.GUI.Map.BattlePrize$$CCLACGABBDP @ RVA 0x3218D18

void Nekki_SF2_GUI_Map_BattlePrize__CCLACGABBDP
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,
               Nekki_SF2_GUI_Map_BattlePrizeElement_o *NMCCKJIIBKK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Action_o *CJNHFNHJHPE;
  System_Collections_Generic_List_BattlePrizeElement__o *__this_01;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  Nekki_SF2_GUI_Map_BattlePrizeElement_array *pNVar4;
  
  if ((DAT_04566eeb & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrize_FAOOCIFKPEM__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566eeb = 1;
  }
  (__this->fields).DKDLLBENAFE = 0.0;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)NMCCKJIIBKK,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar3) {
    if (NMCCKJIIBKK != (Nekki_SF2_GUI_Map_BattlePrizeElement_o *)0x0) {
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)NMCCKJIIBKK,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._layoutGroup;
      if ((__this_02 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) &&
         (parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
        CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        Nekki_SF2_GUI_Map_BattlePrizeElement__add_OnRendered
                  (NMCCKJIIBKK,CJNHFNHJHPE,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<BattlePrizeElement>_Add__;
        __this_01 = (__this->fields).JMAMFIMIIFA;
        if (__this_01 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
          pNVar4 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pNVar4 != (Nekki_SF2_GUI_Map_BattlePrizeElement_array *)0x0) {
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pNVar4->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pNVar4->m_Items[(int)uVar1] = NMCCKJIIBKK;
              thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,NMCCKJIIBKK);
              return;
            }
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       (Il2CppObject *)NMCCKJIIBKK,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void FAOOCIFKPEM()  [RVA 0x3219470]
// Nekki.SF2.GUI.Map.BattlePrize$$FAOOCIFKPEM @ RVA 0x3219470

void Nekki_SF2_GUI_Map_BattlePrize__FAOOCIFKPEM
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,MethodInfo *method)

{
  (__this->fields).IKBBLGEBDGM = true;
  return;
}

