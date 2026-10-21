// TypeDefIndex 1062
// Namespace: Nekki.SF2.GUI
// public class TableView : MonoBehaviour, HGBCDDMHACG
// Fields:
//   private const float IPMKKABHNEJ = 50;
//   private JKOLCOFFPDH tableViewOrientation; // 0x20
//   private float _spacing; // 0x24
//   private float MENMAPNCLAH; // 0x28
//   private float EKHGDOCDNLC; // 0x2C
//   private RectOffset padding; // 0x30
//   private bool inertia; // 0x38
//   private float elasticity; // 0x3C
//   private float scrollSensitivity; // 0x40
//   private float decelerationRate; // 0x44
//   private bool scrollToHighlighted; // 0x48
//   private CPFMNHBNOEN NFKFGFPBGDA; // 0x50
//   private MLIIECFHJAM CFMPOFMLMKK; // 0x58
//   private GameObject KFCHMBGIPJK; // 0x60
//   private float GMCDBHFHFGF; // 0x68
//   private float DJKFFOOJDDD; // 0x6C
//   private float PLICNBJGDFL; // 0x70
//   private float LMBKODIDILL; // 0x74
//   public bool AddMask; // 0x78
//   private KMAKOOHEKNB HCLHHHKCABP; // 0x80
//   private KELJDKIIHMM <LBHOKEBOIFN>k__BackingField; // 0x88
//   private IKGDKGBHEFN MKCAEDADDII; // 0x90
//   private TableViewScroll IDIMFLMKDMD; // 0x98
//   private bool BPELPEAHGHL; // 0xA0
//   private bool EIOEGKDNAJK; // 0xA1
//   private bool FNIBBMLOJIJ; // 0xA2
//   private Tween OGBOMAHLDKN; // 0xA8
//   private bool PIHMBLAFPBJ; // 0xB0
//   public bool IsLockSelection; // 0xB1
//   public TableView.SelectCellEvent onSelectCell; // 0xB8
//   private TableViewCell <LDAHBFIIBJJ>k__BackingField; // 0xC0
//   private float _MinScrollVelocity; // 0xC8

// ===== private void IGJGHJDHOKD(bool NFPAMJDIJLP)  [RVA 0x30D86A8]
// Nekki.SF2.GUI.TableView$$IGJGHJDHOKD @ RVA 0x30D86A8

void Nekki_SF2_GUI_TableView__IGJGHJDHOKD
               (Nekki_SF2_GUI_TableView_o *__this,bool NFPAMJDIJLP,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t DPJIDNBJIBG;
  Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC;
  Nekki_SF2_GUI_TableViewCellDidHighlightEvent_o *__this_00;
  Nekki_SF2_GUI_TableViewCellDidSelectEvent_o *__this_01;
  Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *__this_02;
  IKGDKGBHEFN_o *__this_03;
  UnityEngine_Transform_o *transform;
  KELJDKIIHMM_o *pKVar3;
  KMAKOOHEKNB_o *__this_04;
  float value;
  
  if ((DAT_0456633f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456633f = 1;
  }
  pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (pKVar3 != (KELJDKIIHMM_o *)0x0) {
    if (NFPAMJDIJLP) {
      DPJIDNBJIBG = LECDDPFLBEM__KIKGKKGDCKK
                              ((UnityEngine_SocialPlatforms_Range_o)
                               (pKVar3->fields).CIMDIANAHIM.fields,(MethodInfo *)0x0);
      pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
      if (pKVar3 == (KELJDKIIHMM_o *)0x0) goto LAB_031d8834;
    }
    else {
      DPJIDNBJIBG = (pKVar3->fields).CIMDIANAHIM.fields.from;
    }
    HBHBCBJANIC = KELJDKIIHMM__KHGEMIEPBJB(pKVar3,DPJIDNBJIBG,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)HBHBCBJANIC,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0) &&
       (__this_00 = (HBHBCBJANIC->fields).DidHighlightEvent,
       __this_00 != (Nekki_SF2_GUI_TableViewCellDidHighlightEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      __this_01 = (HBHBCBJANIC->fields).DidSelectEvent;
      if (__this_01 != (Nekki_SF2_GUI_TableViewCellDidSelectEvent_o *)0x0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
        __this_02 = (HBHBCBJANIC->fields).DoubleClickEvent;
        if (__this_02 != (Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *)0x0) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners
                    ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
          __this_03 = (__this->fields).MKCAEDADDII;
          if (__this_03 != (IKGDKGBHEFN_o *)0x0) {
            IKGDKGBHEFN__IKHEOEJKGDI(__this_03,HBHBCBJANIC,(MethodInfo *)0x0);
            pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
            if (pKVar3 != (KELJDKIIHMM_o *)0x0) {
              KELJDKIIHMM__JOBEMHLDEGD(pKVar3,DPJIDNBJIBG,(MethodInfo *)0x0);
              pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
              if (pKVar3 != (KELJDKIIHMM_o *)0x0) {
                (pKVar3->fields).CIMDIANAHIM.fields.count =
                     (pKVar3->fields).CIMDIANAHIM.fields.count + -1;
                if (!NFPAMJDIJLP) {
                  (pKVar3->fields).CIMDIANAHIM.fields.from =
                       (pKVar3->fields).CIMDIANAHIM.fields.from + 1;
                }
                iVar1 = (__this->fields).tableViewOrientation;
                transform = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)HBHBCBJANIC,(MethodInfo *)0x0);
                __this_04 = (__this->fields).HCLHHHKCABP;
                if (__this_04 != (KMAKOOHEKNB_o *)0x0) {
                  value = KMAKOOHEKNB__HGJGLBLDDHF(__this_04,DPJIDNBJIBG,(MethodInfo *)0x0);
                  if (iVar1 == 0) {
                    UnityEngine_TransformExtensions__SetLocalPositionY
                              (transform,value,(MethodInfo *)0x0);
                    return;
                  }
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (transform,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031d8834:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_MinScrollVelocity(float CJNHFNHJHPE)  [RVA 0x30D8848]
// Nekki.SF2.GUI.TableView$$set_MinScrollVelocity @ RVA 0x30D8848

void Nekki_SF2_GUI_TableView__set_MinScrollVelocity
               (Nekki_SF2_GUI_TableView_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MinScrollVelocity = CJNHFNHJHPE;
  return;
}


// ===== private void JIOHAMAMGPF(int JDEFJPHCNMM)  [RVA 0x30D8850]
// Nekki.SF2.GUI.TableView$$JIOHAMAMGPF @ RVA 0x30D8850

void Nekki_SF2_GUI_TableView__JIOHAMAMGPF
               (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  KMAKOOHEKNB_o *__this_00;
  VirtualInvokeData *pVVar3;
  MethodInfo *method_00;
  MLIIECFHJAM_c *pMVar4;
  ulong uVar5;
  int32_t *piVar6;
  Nekki_SF2_GUI_TableViewCell_o *pNVar7;
  MLIIECFHJAM_o *pMVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_04566340 & 1) == 0) {
    FUN_01bab630(&MLIIECFHJAM_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566340 = 1;
  }
  if ((__this->fields).PIHMBLAFPBJ == false) {
    pNVar7 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      pNVar7 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
      if (pNVar7 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
LAB_031d89a8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pNVar7->fields).FIMCNHGPCNA == JDEFJPHCNMM) {
        fVar11 = (__this->fields).GMCDBHFHFGF;
        fVar9 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method_00);
        __this_00 = (__this->fields).HCLHHHKCABP;
        if (__this_00 == (KMAKOOHEKNB_o *)0x0) goto LAB_031d89a8;
        fVar10 = KMAKOOHEKNB__HGJGLBLDDHF(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
        if ((ABS(fVar11 - fVar9) <= fVar10 * 0.0625) &&
           (pMVar8 = (__this->fields).CFMPOFMLMKK, pMVar8 != (MLIIECFHJAM_o *)0x0)) {
          pMVar4 = pMVar8->klass;
          uVar1._0_1_ = (pMVar4->_2).rank;
          uVar1._1_1_ = (pMVar4->_2).minimumAlignment;
          uVar5 = (ulong)uVar1;
          if (uVar5 != 0) {
            piVar6 = &((pMVar4->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
                  (Il2CppClass *)MLIIECFHJAM_TypeInfo) {
                pVVar3 = pMVar4->vtable + (*piVar6 + 2);
                goto LAB_031d8988;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar8,MLIIECFHJAM_TypeInfo,2);
LAB_031d8988:
                    /* WARNING: Could not recover jumptable at 0x031d89a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pVVar3->methodPtr)(pMVar8,__this,(ulong)(uint)JDEFJPHCNMM,pVVar3->method);
          return;
        }
      }
    }
  }
  return;
}


// ===== public float CurrentRowSize()  [RVA 0x30D8A30]
// Nekki.SF2.GUI.TableView$$CurrentRowSize @ RVA 0x30D8A30

float Nekki_SF2_GUI_TableView__CurrentRowSize(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  CPFMNHBNOEN_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CPFMNHBNOEN_o *pCVar7;
  float fVar8;
  
  if ((DAT_04566341 & 1) == 0) {
    FUN_01bab630(&CPFMNHBNOEN_TypeInfo);
    DAT_04566341 = 1;
    method = extraout_x1;
  }
  pCVar7 = (__this->fields).NFKFGFPBGDA;
  uVar2 = Nekki_SF2_GUI_TableView__GetCurrentCellRow(__this,method);
  if (pCVar7 == (CPFMNHBNOEN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8((ulong)uVar2);
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPFMNHBNOEN_TypeInfo) {
        pVVar3 = pCVar4->vtable + (*piVar6 + 1);
        goto LAB_031d8ac8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CPFMNHBNOEN_TypeInfo,1);
LAB_031d8ac8:
                    /* WARNING: Could not recover jumptable at 0x031d8ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar8 = (float)(*pVVar3->methodPtr)(pCVar7,__this,(ulong)uVar2,pVVar3->method);
  return fVar8;
}


// ===== private void DOGOHNGEGLE(Range DFBACAOEOAJ, Range HIFNAFEEFBF)  [RVA 0x30D8B68]
// Nekki.SF2.GUI.TableView$$DOGOHNGEGLE @ RVA 0x30D8B68

void Nekki_SF2_GUI_TableView__DOGOHNGEGLE
               (Nekki_SF2_GUI_TableView_o *__this,UnityEngine_SocialPlatforms_Range_o DFBACAOEOAJ,
               UnityEngine_SocialPlatforms_Range_o HIFNAFEEFBF,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  iVar1 = DFBACAOEOAJ.fields.from;
  while (iVar1 = iVar1 + -1, HIFNAFEEFBF.fields.from <= iVar1) {
    Nekki_SF2_GUI_TableView__KGDGDCKDLKG(__this,iVar1,false,method);
  }
  iVar1 = LECDDPFLBEM__KIKGKKGDCKK(DFBACAOEOAJ,(MethodInfo *)0x0);
  while( true ) {
    iVar1 = iVar1 + 1;
    iVar2 = LECDDPFLBEM__KIKGKKGDCKK(HIFNAFEEFBF,(MethodInfo *)0x0);
    if (iVar2 < iVar1) break;
    Nekki_SF2_GUI_TableView__KGDGDCKDLKG(__this,iVar1,true,method);
  }
  return;
}


// ===== private void DAAGPOAOHCK()  [RVA 0x30D8D54]
// Nekki.SF2.GUI.TableView$$DAAGPOAOHCK @ RVA 0x30D8D54

void Nekki_SF2_GUI_TableView__DAAGPOAOHCK(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_LinkedList_TableViewCell__o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  IKGDKGBHEFN_o *pIVar5;
  KELJDKIIHMM_o *pKVar6;
  Nekki_SF2_GUI_TableViewCell_o **ppNVar7;
  System_Collections_Generic_LinkedList_Enumerator_T__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  System_Collections_Generic_LinkedList_Enumerator_T__o local_60;
  
  if ((DAT_04566342 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_TableViewCell>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>_GetEnumerator__);
    DAT_04566342 = 1;
  }
  local_60.fields._index = 0;
  local_60.fields._36_4_ = 0;
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_60.fields._node = (System_Collections_Generic_LinkedListNode_T__o *)0x0;
  local_60.fields._list = (System_Collections_Generic_LinkedList_T__o *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_60.fields._version = 0;
  local_60.fields._20_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  pIVar5 = (__this->fields).MKCAEDADDII;
  if (pIVar5 != (IKGDKGBHEFN_o *)0x0) {
    pSVar2 = (pIVar5->fields).LNKABGKKHGB;
    if (pSVar2 == (System_Collections_Generic_LinkedList_TableViewCell__o *)0x0) goto LAB_031d8f9c;
    System_Collections_Generic_LinkedList<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_LinkedList_T__o *)pSVar2,
               Method_System_Collections_Generic_LinkedList<TableViewCell>_GetEnumerator__);
    local_60.fields._node = local_b8.fields._node;
    local_60.fields._list = local_b8.fields._list;
    local_60.fields._current = local_b8.fields._current;
    local_60.fields._version = local_b8.fields._version;
    local_60.fields._20_4_ = local_b8.fields._20_4_;
    local_60.fields._index = local_b8.fields._index;
    local_60.fields._36_4_ = local_b8.fields._36_4_;
    while (bVar1 = System_Collections_Generic_LinkedList_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_60.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_60.fields._current,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_LinkedList_Enumerator<object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_LinkedList_Enumerator<TableViewCell>_Dispose__);
    pIVar5 = (__this->fields).MKCAEDADDII;
    if ((pIVar5 == (IKGDKGBHEFN_o *)0x0) ||
       (pSVar2 = (pIVar5->fields).LNKABGKKHGB,
       pSVar2 == (System_Collections_Generic_LinkedList_TableViewCell__o *)0x0)) goto LAB_031d8f9c;
    System_Collections_Generic_LinkedList<object>__Clear
              ((System_Collections_Generic_LinkedList_T__o *)pSVar2,
               Method_System_Collections_Generic_LinkedList<TableViewCell>_Clear__);
  }
  pKVar6 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (pKVar6 == (KELJDKIIHMM_o *)0x0) {
    return;
  }
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
           (pKVar6->fields)._IKBFEDMFOMJ_k__BackingField;
  if (pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
              (&local_90,pSVar4,
               Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_90.fields._current.fields.value ==
          (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_90.fields._current.fields.value,
                          (MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar3,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
              );
    pKVar6 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
    local_b8.fields._list = (System_Collections_Generic_LinkedList_T__o *)0x0;
    UnityEngine_SocialPlatforms_Range___ctor
              ((UnityEngine_SocialPlatforms_Range_o)&local_b8,0,0,(MethodInfo *)0x0);
    if (pKVar6 != (KELJDKIIHMM_o *)0x0) {
      (pKVar6->fields).CIMDIANAHIM.fields =
           (UnityEngine_SocialPlatforms_Range_Fields)local_b8.fields._list;
      pKVar6 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
      if ((pKVar6 != (KELJDKIIHMM_o *)0x0) &&
         (pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (pKVar6->fields)._IKBFEDMFOMJ_k__BackingField,
         pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
        System_Collections_Generic_Dictionary<int,_object>__Clear
                  (pSVar4,Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_Clear__);
        ppNVar7 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
        *ppNVar7 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
        thunk_FUN_01c20e04(ppNVar7,0);
        return;
      }
    }
  }
LAB_031d8f9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CPFMNHBNOEN get_DataSource()  [RVA 0x30D9088]
// Nekki.SF2.GUI.TableView$$get_DataSource @ RVA 0x30D9088

CPFMNHBNOEN_o *
Nekki_SF2_GUI_TableView__get_DataSource(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields).NFKFGFPBGDA;
}


// ===== public TableViewCell CellForRow(int JDEFJPHCNMM)  [RVA 0x30D9090]
// Nekki.SF2.GUI.TableView$$CellForRow @ RVA 0x30D9090

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__CellForRow
          (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_TableViewCell_o *pNVar1;
  
  __this_00 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (__this_00 != (KELJDKIIHMM_o *)0x0) {
    pNVar1 = KELJDKIIHMM__KHGEMIEPBJB(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
    return pNVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MDJIGKABCOC(KELJDKIIHMM CJNHFNHJHPE)  [RVA 0x30D90AC]
// Nekki.SF2.GUI.TableView$$MDJIGKABCOC @ RVA 0x30D90AC

void Nekki_SF2_GUI_TableView__MDJIGKABCOC
               (Nekki_SF2_GUI_TableView_o *__this,KELJDKIIHMM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LBHOKEBOIFN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void Init(CPFMNHBNOEN CBHHDMMIJKM, MLIIECFHJAM FNBNALGIDNF)  [RVA 0x30D90B4]
// Nekki.SF2.GUI.TableView$$Init @ RVA 0x30D90B4

void Nekki_SF2_GUI_TableView__Init
               (Nekki_SF2_GUI_TableView_o *__this,CPFMNHBNOEN_o *CBHHDMMIJKM,
               MLIIECFHJAM_o *FNBNALGIDNF,MethodInfo *method)

{
  CPFMNHBNOEN_o **ppCVar1;
  MLIIECFHJAM_o **ppMVar2;
  KMAKOOHEKNB_o *__this_00;
  KELJDKIIHMM_o *__this_01;
  KELJDKIIHMM_o **ppKVar3;
  IKGDKGBHEFN_o *__this_02;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar5;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Events_UnityAction_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_02;
  Nekki_SF2_GUI_TableViewScroll_o **ppNVar7;
  KMAKOOHEKNB_o **ppKVar8;
  IKGDKGBHEFN_o **ppIVar9;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_03;
  UnityEngine_Events_UnityEvent_o *pUVar10;
  float fVar11;
  undefined8 uVar12;
  
  if ((DAT_04566343 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<RectMask2D>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TableViewScroll>__);
    FUN_01bab630(&IKGDKGBHEFN_TypeInfo);
    FUN_01bab630(&KELJDKIIHMM_TypeInfo);
    FUN_01bab630(&KMAKOOHEKNB_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_LDHGBDGHOKI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_MPMDFILDNCJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_PEBNCHIIKID__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
    DAT_04566343 = 1;
  }
  ppCVar1 = &(__this->fields).NFKFGFPBGDA;
  *ppCVar1 = CBHHDMMIJKM;
  thunk_FUN_01c20e04(ppCVar1,CBHHDMMIJKM);
  ppMVar2 = &(__this->fields).CFMPOFMLMKK;
  *ppMVar2 = FNBNALGIDNF;
  thunk_FUN_01c20e04(ppMVar2,FNBNALGIDNF);
  (__this->fields).BPELPEAHGHL = true;
  __this_00 = (KMAKOOHEKNB_o *)thunk_FUN_01bda818(KMAKOOHEKNB_TypeInfo);
  KMAKOOHEKNB___ctor(__this_00,(MethodInfo *)0x0);
  ppKVar8 = &(__this->fields).HCLHHHKCABP;
  *ppKVar8 = __this_00;
  thunk_FUN_01c20e04(ppKVar8,__this_00);
  if (*ppKVar8 != (KMAKOOHEKNB_o *)0x0) {
    ((*ppKVar8)->fields).KPGBDEPEHJD = (__this->fields)._spacing;
    __this_01 = (KELJDKIIHMM_o *)thunk_FUN_01bda818(KELJDKIIHMM_TypeInfo);
    KELJDKIIHMM___ctor(__this_01,(MethodInfo *)0x0);
    ppKVar3 = &(__this->fields)._LBHOKEBOIFN_k__BackingField;
    *ppKVar3 = __this_01;
    thunk_FUN_01c20e04(ppKVar3,__this_01);
    __this_02 = (IKGDKGBHEFN_o *)thunk_FUN_01bda818(IKGDKGBHEFN_TypeInfo);
    IKGDKGBHEFN___ctor(__this_02,(MethodInfo *)0x0);
    ppIVar9 = &(__this->fields).MKCAEDADDII;
    *ppIVar9 = __this_02;
    thunk_FUN_01c20e04(ppIVar9,__this_02);
    if (*ppIVar9 != (IKGDKGBHEFN_o *)0x0) {
      IKGDKGBHEFN__GIENGNEGHPJ(*ppIVar9,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pNVar5 = (Nekki_SF2_GUI_TableViewScroll_o *)
                 UnityEngine_GameObject__AddComponent<object>
                           (pUVar4,Method_UnityEngine_GameObject_AddComponent<TableViewScroll>__);
        ppNVar7 = &(__this->fields).IDIMFLMKDMD;
        *ppNVar7 = pNVar5;
        thunk_FUN_01c20e04(ppNVar7,pNVar5);
        if (*ppNVar7 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
          Nekki_SF2_GUI_TableViewScroll__Init(*ppNVar7,(MethodInfo *)0x0);
          if (*ppNVar7 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
            Nekki_SF2_GUI_TableViewScroll__SetOrientation
                      (*ppNVar7,(__this->fields).tableViewOrientation,(MethodInfo *)0x0);
            pNVar5 = (__this->fields).IDIMFLMKDMD;
            if (pNVar5 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
              fVar11 = (__this->fields).elasticity;
              (pNVar5->fields).super.m_MovementType = 3;
              (pNVar5->fields).super.m_Elasticity = fVar11;
              (pNVar5->fields).super.m_Inertia = (__this->fields).inertia;
              uVar12._0_4_ = (__this->fields).scrollSensitivity;
              uVar12._4_4_ = (__this->fields).decelerationRate;
              __this_03 = (UnityEngine_Events_UnityEvent_Vector2__o *)
                          (pNVar5->fields).super.m_OnValueChanged;
              uVar12 = NEON_rev64(uVar12,4);
              (pNVar5->fields).super.m_DecelerationRate = (float)(int)uVar12;
              (pNVar5->fields).super.m_ScrollSensitivity = (float)(int)((ulong)uVar12 >> 0x20);
              call = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<Vector2>_TypeInfo);
              UnityEngine_Events_UnityAction<Vector2>___ctor();
              if (__this_03 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                UnityEngine_Events_UnityEvent<Vector2>__AddListener
                          (__this_03,call,
                           Method_UnityEngine_Events_UnityEvent<Vector2>_AddListener__);
                if (*ppNVar7 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
                  pUVar10 = ((*ppNVar7)->fields).onDragBegin;
                  pUVar6 = (UnityEngine_Events_UnityAction_o *)
                           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                  UnityEngine_Events_UnityAction___ctor();
                  if (pUVar10 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar10,pUVar6,(MethodInfo *)0x0);
                    if (*ppNVar7 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
                      pUVar10 = ((*ppNVar7)->fields).onDragEnd;
                      pUVar6 = (UnityEngine_Events_UnityAction_o *)
                               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (pUVar10 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(pUVar10,pUVar6,(MethodInfo *)0x0)
                        ;
                        fVar11 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
                        (__this->fields).MENMAPNCLAH = fVar11 * 0.5;
                        fVar11 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_01);
                        (__this->fields).EKHGDOCDNLC = fVar11 * 0.5;
                        method_02 = extraout_x1;
                        if ((__this->fields).AddMask == false) {
LAB_031d9414:
                          Nekki_SF2_GUI_TableView__ReloadData(__this,method_02);
                          return;
                        }
                        pUVar4 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__AddComponent<object>
                                    (pUVar4,Method_UnityEngine_GameObject_AddComponent<RectMask2D>__
                                    );
                          pUVar4 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__AddComponent<object>
                                      (pUVar4,
                                       Method_UnityEngine_GameObject_AddComponent<CanvasRenderer>__)
                            ;
                            method_02 = extraout_x1_00;
                            goto LAB_031d9414;
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_DataSource(CPFMNHBNOEN CJNHFNHJHPE)  [RVA 0x30D9634]
// Nekki.SF2.GUI.TableView$$set_DataSource @ RVA 0x30D9634

void Nekki_SF2_GUI_TableView__set_DataSource
               (Nekki_SF2_GUI_TableView_o *__this,CPFMNHBNOEN_o *CJNHFNHJHPE,MethodInfo *method)

{
  CPFMNHBNOEN_o **ppCVar1;
  
  ppCVar1 = &(__this->fields).NFKFGFPBGDA;
  *ppCVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppCVar1);
  (__this->fields).EIOEGKDNAJK = true;
  return;
}


// ===== public float get_ContentSize()  [RVA 0x30D9658]
// Nekki.SF2.GUI.TableView$$get_ContentSize @ RVA 0x30D9658

float Nekki_SF2_GUI_TableView__get_ContentSize(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewScroll_o *__this_00;
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  __this_00 = (__this->fields).IDIMFLMKDMD;
  if (__this_00 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
    fVar1 = Nekki_SF2_GUI_TableViewScroll__get_Size(__this_00,(MethodInfo *)0x0);
    fVar2 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
    return fVar1 - fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public TableViewCell get_SelectedCell()  [RVA 0x30D9694]
// Nekki.SF2.GUI.TableView$$get_SelectedCell @ RVA 0x30D9694

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__get_SelectedCell(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields)._LDAHBFIIBJJ_k__BackingField;
}


// ===== public GameObject get_CellPrefab()  [RVA 0x30D969C]
// Nekki.SF2.GUI.TableView$$get_CellPrefab @ RVA 0x30D969C

UnityEngine_GameObject_o *
Nekki_SF2_GUI_TableView__get_CellPrefab(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields).KFCHMBGIPJK;
}


// ===== public float get_Spacing()  [RVA 0x30D96A4]
// Nekki.SF2.GUI.TableView$$get_Spacing @ RVA 0x30D96A4

float Nekki_SF2_GUI_TableView__get_Spacing(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields)._spacing;
}


// ===== private TableViewCell LBGGFHONFIG(TableViewCell HBHBCBJANIC, int JDEFJPHCNMM, bool IEBOPHEHOFH)  [RVA 0x30D96AC]
// Nekki.SF2.GUI.TableView$$LBGGFHONFIG @ RVA 0x30D96AC

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__LBGGFHONFIG
          (Nekki_SF2_GUI_TableView_o *__this,Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC,
          int32_t JDEFJPHCNMM,bool IEBOPHEHOFH,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  KELJDKIIHMM_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *__this_01;
  int iVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar5;
  UnityEngine_Events_UnityEvent_int__o *pUVar6;
  float value;
  
  if ((DAT_04566344 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_DPFEFNDJCIG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_JIOHAMAMGPF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_LDMJLCHMDAP__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<int>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__);
    DAT_04566344 = 1;
  }
  if (HBHBCBJANIC != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    Nekki_SF2_GUI_TableViewCell__set_RowNumber(HBHBCBJANIC,JDEFJPHCNMM,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DidHighlightEvent;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
    UnityEngine_Events_UnityAction<int>___ctor();
    if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
      UnityEngine_Events_UnityEvent<int>__RemoveListener
                (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__);
      pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DidHighlightEvent;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
      UnityEngine_Events_UnityAction<int>___ctor();
      if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
        UnityEngine_Events_UnityEvent<int>__AddListener
                  (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
        pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DidSelectEvent;
        pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
        UnityEngine_Events_UnityAction<int>___ctor();
        if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
          UnityEngine_Events_UnityEvent<int>__RemoveListener
                    (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__);
          pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DidSelectEvent;
          pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
          UnityEngine_Events_UnityAction<int>___ctor();
          if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
            UnityEngine_Events_UnityEvent<int>__AddListener
                      (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
            pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)(HBHBCBJANIC->fields).DoubleClickEvent;
            pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
            UnityEngine_Events_UnityAction<int>___ctor();
            if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
              UnityEngine_Events_UnityEvent<int>__RemoveListener
                        (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_RemoveListener__);
              pUVar6 = (UnityEngine_Events_UnityEvent_int__o *)
                       (HBHBCBJANIC->fields).DoubleClickEvent;
              pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction<int>_TypeInfo);
              UnityEngine_Events_UnityAction<int>___ctor();
              if (pUVar6 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
                UnityEngine_Events_UnityEvent<int>__AddListener
                          (pUVar6,pUVar2,Method_UnityEngine_Events_UnityEvent<int>_AddListener__);
                __this_00 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
                if (__this_00 != (KELJDKIIHMM_o *)0x0) {
                  KELJDKIIHMM__MCMKOONDIEO(__this_00,JDEFJPHCNMM,HBHBCBJANIC,(MethodInfo *)0x0);
                  pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)HBHBCBJANIC,(MethodInfo *)0x0);
                  if (IEBOPHEHOFH) {
                    pNVar5 = (__this->fields).IDIMFLMKDMD;
                    if (((pNVar5 == (Nekki_SF2_GUI_TableViewScroll_o *)0x0) ||
                        (__this_01 = (pNVar5->fields).super.m_Content,
                        __this_01 == (UnityEngine_RectTransform_o *)0x0)) ||
                       (iVar1 = UnityEngine_Transform__get_childCount
                                          ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0),
                       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_031d9974;
                    iVar4 = iVar1 + -1;
                  }
                  else {
                    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto LAB_031d9974;
                    iVar4 = 0;
                  }
                  method_00 = (MethodInfo *)0x0;
                  UnityEngine_Transform__SetSiblingIndex(pUVar3,iVar4,(MethodInfo *)0x0);
                  iVar4 = (__this->fields).tableViewOrientation;
                  pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)HBHBCBJANIC,(MethodInfo *)0x0);
                  value = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method_00);
                  if (iVar4 == 0) {
                    UnityEngine_TransformExtensions__SetLocalPositionY
                              (pUVar3,-value,(MethodInfo *)0x0);
                  }
                  else {
                    UnityEngine_TransformExtensions__SetLocalPositionX
                              (pUVar3,value,(MethodInfo *)0x0);
                  }
                  return HBHBCBJANIC;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031d9974:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private TableViewCell KLAGNKHFMCE(int JDEFJPHCNMM)  [RVA 0x30D9978]
// Nekki.SF2.GUI.TableView$$KLAGNKHFMCE @ RVA 0x30D9978

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__KLAGNKHFMCE
          (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TableViewCell_o *__this_00;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *parent;
  
  if ((DAT_04566345 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TableViewCell>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566345 = 1;
  }
  x = (UnityEngine_Object_o *)(__this->fields).KFCHMBGIPJK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Nekki_SF2_GUI_TableViewCell_o *)0x0;
  }
  pNVar2 = (__this->fields).IDIMFLMKDMD;
  if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
    pUVar3 = (__this->fields).KFCHMBGIPJK;
    parent = (pNVar2->fields).super.m_Content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar3,(UnityEngine_Transform_o *)parent,false,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = (Nekki_SF2_GUI_TableViewCell_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar3,Method_UnityEngine_GameObject_GetComponent<TableViewCell>__),
       __this_00 != (Nekki_SF2_GUI_TableViewCell_o *)0x0)) {
      Nekki_SF2_GUI_TableViewCell__set_RowNumber(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
      Nekki_SF2_GUI_TableView__LBGGFHONFIG(__this,__this_00,JDEFJPHCNMM,true,in_x4);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GFECOLFOILC(float NNEOOGABAAB)  [RVA 0x30D9A88]
// Nekki.SF2.GUI.TableView$$GFECOLFOILC @ RVA 0x30D9A88

void Nekki_SF2_GUI_TableView__GFECOLFOILC
               (Nekki_SF2_GUI_TableView_o *__this,float NNEOOGABAAB,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewScroll_o *__this_00;
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  if (((__this->fields).BPELPEAHGHL == false) &&
     (fVar1 = (__this->fields).GMCDBHFHFGF, fVar1 != NNEOOGABAAB)) {
    (__this->fields).FNIBBMLOJIJ = true;
    (__this->fields).PLICNBJGDFL = NNEOOGABAAB - fVar1;
    (__this->fields).GMCDBHFHFGF = NNEOOGABAAB;
    fVar1 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method);
    fVar2 = Nekki_SF2_GUI_TableView__get_ContentSize(__this,method_00);
    __this_00 = (__this->fields).IDIMFLMKDMD;
    if (__this_00 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
      fVar2 = (NNEOOGABAAB + fVar1 * -0.5) / fVar2;
      fVar1 = 1.0 - fVar2;
      if ((__this->fields).tableViewOrientation != 0) {
        fVar1 = fVar2;
      }
      Nekki_SF2_GUI_TableViewScroll__SetNormalizedPosition(__this_00,fVar1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private float KILOIOEILFL()  [RVA 0x30D9B20]
// Nekki.SF2.GUI.TableView$$KILOIOEILFL @ RVA 0x30D9B20

float Nekki_SF2_GUI_TableView__KILOIOEILFL(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields).GMCDBHFHFGF;
}


// ===== public float get_MinScrollVelocity()  [RVA 0x30D9B28]
// Nekki.SF2.GUI.TableView$$get_MinScrollVelocity @ RVA 0x30D9B28

float Nekki_SF2_GUI_TableView__get_MinScrollVelocity
                (Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields)._MinScrollVelocity;
}


// ===== public void ReloadData()  [RVA 0x30D94A8]
// Nekki.SF2.GUI.TableView$$ReloadData @ RVA 0x30D94A8

void Nekki_SF2_GUI_TableView__ReloadData(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  uint DFIBGGDJPLM;
  Nekki_SF2_GUI_TableViewCell_o **ppNVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  KMAKOOHEKNB_o *pKVar4;
  CPFMNHBNOEN_c *pCVar5;
  ulong uVar6;
  int32_t *piVar7;
  Nekki_SF2_GUI_TableViewScroll_o *__this_00;
  uint JDEFJPHCNMM;
  CPFMNHBNOEN_o *pCVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_04566346 & 1) == 0) {
    FUN_01bab630(&CPFMNHBNOEN_TypeInfo);
    DAT_04566346 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_TableView__NAOPHLEJGGL(__this,method);
  ppNVar2 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
  *ppNVar2 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  DFIBGGDJPLM = Nekki_SF2_GUI_TableView__NumberOfRows(__this,method_00);
  pKVar4 = (__this->fields).HCLHHHKCABP;
  if (pKVar4 != (KMAKOOHEKNB_o *)0x0) {
    KMAKOOHEKNB__CECCCGNLKFN(pKVar4,DFIBGGDJPLM,(MethodInfo *)0x0);
    (__this->fields).BPELPEAHGHL = DFIBGGDJPLM == 0;
    if (DFIBGGDJPLM == 0) {
      return;
    }
    if (0 < (int)DFIBGGDJPLM) {
      JDEFJPHCNMM = 0;
      do {
        pCVar8 = (__this->fields).NFKFGFPBGDA;
        if (pCVar8 == (CPFMNHBNOEN_o *)0x0) goto LAB_031d9630;
        pCVar5 = pCVar8->klass;
        uVar1._0_1_ = (pCVar5->_2).rank;
        uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
        uVar6 = (ulong)uVar1;
        if (uVar6 != 0) {
          piVar7 = &((pCVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)CPFMNHBNOEN_TypeInfo) {
              pVVar3 = pCVar5->vtable + (*piVar7 + 1);
              goto LAB_031d9598;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar8,CPFMNHBNOEN_TypeInfo,1);
LAB_031d9598:
        fVar9 = (float)(*pVVar3->methodPtr)(pCVar8,__this,(ulong)JDEFJPHCNMM,pVVar3->method);
        pKVar4 = (__this->fields).HCLHHHKCABP;
        if (pKVar4 == (KMAKOOHEKNB_o *)0x0) goto LAB_031d9630;
        KMAKOOHEKNB__FIPNKCMHCLE(pKVar4,fVar9,JDEFJPHCNMM,(MethodInfo *)0x0);
        JDEFJPHCNMM = JDEFJPHCNMM + 1;
      } while (JDEFJPHCNMM != DFIBGGDJPLM);
    }
    pKVar4 = (__this->fields).HCLHHHKCABP;
    if (pKVar4 != (KMAKOOHEKNB_o *)0x0) {
      __this_00 = (__this->fields).IDIMFLMKDMD;
      fVar10 = (__this->fields).MENMAPNCLAH;
      fVar9 = KMAKOOHEKNB__GOFGJILDJLA(pKVar4,DFIBGGDJPLM - 1,(MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
        Nekki_SF2_GUI_TableViewScroll__set_SizeDelta
                  (__this_00,fVar10 + fVar9 + (__this->fields).EKHGDOCDNLC,(MethodInfo *)0x0);
        Nekki_SF2_GUI_TableView__NAOPHLEJGGL(__this,method_01);
        Nekki_SF2_GUI_TableView__BGOLOHLDFGK(__this,method_02);
        (__this->fields).EIOEGKDNAJK = false;
        return;
      }
    }
  }
LAB_031d9630:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LDMJLCHMDAP(int JDEFJPHCNMM)  [RVA 0x30D9C6C]
// Nekki.SF2.GUI.TableView$$LDMJLCHMDAP @ RVA 0x30D9C6C

void Nekki_SF2_GUI_TableView__LDMJLCHMDAP
               (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MLIIECFHJAM_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MLIIECFHJAM_o *pMVar6;
  
  if ((DAT_04566347 & 1) == 0) {
    FUN_01bab630(&MLIIECFHJAM_TypeInfo,(ulong)(uint)JDEFJPHCNMM);
    DAT_04566347 = 1;
  }
  pMVar6 = (__this->fields).CFMPOFMLMKK;
  if (pMVar6 == (MLIIECFHJAM_o *)0x0) {
    return;
  }
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MLIIECFHJAM_TypeInfo) {
        pVVar2 = pMVar3->vtable + (*piVar5 + 1);
        goto LAB_031d9d08;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MLIIECFHJAM_TypeInfo,1);
LAB_031d9d08:
                    /* WARNING: Could not recover jumptable at 0x031d9d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,__this,(ulong)(uint)JDEFJPHCNMM,pVVar2->method);
  return;
}


// ===== private TableViewCell MNKOGBDLIHK()  [RVA 0x30D9D24]
// Nekki.SF2.GUI.TableView$$MNKOGBDLIHK @ RVA 0x30D9D24

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__MNKOGBDLIHK(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  undefined8 uVar3;
  MethodInfo *in_x2;
  KELJDKIIHMM_o *pKVar4;
  Nekki_SF2_GUI_TableViewCell_o *pNVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = __this;
  if ((DAT_04566348 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_TableViewCell>_get_Key__);
    auVar9 = FUN_01bab630(&
                          Method_System_Collections_Generic_KeyValuePair<int,_TableViewCell>_get_Value__
                         );
    DAT_04566348 = 1;
  }
  uVar3 = auVar9._0_8_;
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  pKVar4 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (pKVar4 != (KELJDKIIHMM_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                (pKVar4->fields)._IKBFEDMFOMJ_k__BackingField;
    uVar3 = 0;
    if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
                (&local_70,__this_00,
                 Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
      pNVar5 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
      fVar7 = 3.4028235e+38;
      while (bVar2 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                               ), pIVar1 = local_70.fields._current.fields.value, bVar2) {
        fVar8 = (__this->fields).GMCDBHFHFGF;
        fVar6 = Nekki_SF2_GUI_TableView__PositionForRow
                          (__this,(int32_t)local_70.fields._current.fields.key,in_x2);
        fVar6 = ABS(fVar8 - fVar6);
        if (fVar6 < fVar7) {
          pNVar5 = (Nekki_SF2_GUI_TableViewCell_o *)pIVar1;
          fVar7 = fVar6;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
                );
      return pNVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar3,auVar9._8_8_);
}


// ===== public void ScrollToCell(int JDEFJPHCNMM, float LFJGFLNMBMC = 0)  [RVA 0x30D9EB4]
// Nekki.SF2.GUI.TableView$$ScrollToCell @ RVA 0x30D9EB4

void Nekki_SF2_GUI_TableView__ScrollToCell
               (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,float LFJGFLNMBMC,
               MethodInfo *method)

{
  MethodInfo *method_00;
  float NNEOOGABAAB;
  
  NNEOOGABAAB = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method);
  Nekki_SF2_GUI_TableView__SetPosition(__this,NNEOOGABAAB,LFJGFLNMBMC,method_00);
  return;
}


// ===== public KELJDKIIHMM get_visibleCells()  [RVA 0x30DA19C]
// Nekki.SF2.GUI.TableView$$get_visibleCells @ RVA 0x30DA19C

KELJDKIIHMM_o *
Nekki_SF2_GUI_TableView__get_visibleCells(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields)._LBHOKEBOIFN_k__BackingField;
}


// ===== public bool get_IsVertical()  [RVA 0x30D8838]
// Nekki.SF2.GUI.TableView$$get_IsVertical @ RVA 0x30D8838

bool Nekki_SF2_GUI_TableView__get_IsVertical(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields).tableViewOrientation == 0;
}


// ===== public float get_DistanceToTarget()  [RVA 0x30DA1A4]
// Nekki.SF2.GUI.TableView$$get_DistanceToTarget @ RVA 0x30DA1A4

float Nekki_SF2_GUI_TableView__get_DistanceToTarget
                (Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return ABS((__this->fields).GMCDBHFHFGF - (__this->fields).LMBKODIDILL);
}


// ===== protected void ELHKJOJNCGC(TableViewCell CJNHFNHJHPE)  [RVA 0x30DA1B4]
// Nekki.SF2.GUI.TableView$$ELHKJOJNCGC @ RVA 0x30DA1B4

void Nekki_SF2_GUI_TableView__ELHKJOJNCGC
               (Nekki_SF2_GUI_TableView_o *__this,Nekki_SF2_GUI_TableViewCell_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._LDAHBFIIBJJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public Range get_VisibleRange()  [RVA 0x30DA1BC]
// Nekki.SF2.GUI.TableView$$get_VisibleRange @ RVA 0x30DA1BC

UnityEngine_SocialPlatforms_Range_o
Nekki_SF2_GUI_TableView__get_VisibleRange(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  KELJDKIIHMM_o *pKVar1;
  
  pKVar1 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (pKVar1 != (KELJDKIIHMM_o *)0x0) {
    return (UnityEngine_SocialPlatforms_Range_o)(pKVar1->fields).CIMDIANAHIM.fields;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_Position()  [RVA 0x30DA1D8]
// Nekki.SF2.GUI.TableView$$get_Position @ RVA 0x30DA1D8

float Nekki_SF2_GUI_TableView__get_Position(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields).GMCDBHFHFGF;
}


// ===== private void MPMDFILDNCJ()  [RVA 0x30DA1E0]
// Nekki.SF2.GUI.TableView$$MPMDFILDNCJ @ RVA 0x30DA1E0

void Nekki_SF2_GUI_TableView__MPMDFILDNCJ(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  (__this->fields).PIHMBLAFPBJ = true;
  Nekki_SF2_GUI_TableView__KillTween(__this,method);
  return;
}


// ===== public MLIIECFHJAM get_Delegate()  [RVA 0x30DA224]
// Nekki.SF2.GUI.TableView$$get_Delegate @ RVA 0x30DA224

MLIIECFHJAM_o *
Nekki_SF2_GUI_TableView__get_Delegate(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields).CFMPOFMLMKK;
}


// ===== private void BFHNEAPPOFM()  [RVA 0x30DA22C]
// Nekki.SF2.GUI.TableView$$BFHNEAPPOFM @ RVA 0x30DA22C

void Nekki_SF2_GUI_TableView__BFHNEAPPOFM(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  KELJDKIIHMM_Fields *pKVar1;
  int iVar2;
  UnityEngine_SocialPlatforms_Range_Fields CMHCEEPDACF;
  bool bVar3;
  int32_t iVar4;
  KMAKOOHEKNB_o *__this_00;
  UnityEngine_SocialPlatforms_Range_o CMHCEEPDACF_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x3;
  KELJDKIIHMM_o *pKVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  (__this->fields).FNIBBMLOJIJ = false;
  if ((__this->fields).BPELPEAHGHL == false) {
    __this_00 = (__this->fields).HCLHHHKCABP;
    if (__this_00 == (KMAKOOHEKNB_o *)0x0) {
LAB_031da34c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar6 = (__this->fields).GMCDBHFHFGF;
    fVar8 = (__this->fields).DJKFFOOJDDD;
    fVar7 = KMAKOOHEKNB__HGJGLBLDDHF(__this_00,0,(MethodInfo *)0x0);
    if (fVar7 * 0.5 + (__this->fields)._spacing * 0.5 <= ABS(fVar6 - fVar8)) {
      pKVar5 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
      (__this->fields).DJKFFOOJDDD = (__this->fields).GMCDBHFHFGF;
      if (pKVar5 == (KELJDKIIHMM_o *)0x0) goto LAB_031da34c;
      pKVar1 = &pKVar5->fields;
      iVar2 = (pKVar1->CIMDIANAHIM).fields.from;
      CMHCEEPDACF = (pKVar1->CIMDIANAHIM).fields;
      CMHCEEPDACF_00 = Nekki_SF2_GUI_TableView__GFAFEFPKGLH(__this,method_00);
      iVar4 = LECDDPFLBEM__KIKGKKGDCKK
                        ((UnityEngine_SocialPlatforms_Range_o)CMHCEEPDACF,(MethodInfo *)0x0);
      method_01 = extraout_x1;
      if ((iVar4 < CMHCEEPDACF_00.fields.from) ||
         (iVar4 = LECDDPFLBEM__KIKGKKGDCKK(CMHCEEPDACF_00,(MethodInfo *)0x0),
         method_01 = extraout_x1_00, iVar4 < iVar2)) {
        Nekki_SF2_GUI_TableView__NAOPHLEJGGL(__this,method_01);
        Nekki_SF2_GUI_TableView__BGOLOHLDFGK(__this,method_02);
        return;
      }
      bVar3 = LECDDPFLBEM__GAKDEAHMIPB
                        ((UnityEngine_SocialPlatforms_Range_o)CMHCEEPDACF,CMHCEEPDACF_00,
                         (MethodInfo *)0x0);
      if (!bVar3) {
        Nekki_SF2_GUI_TableView__FJPJBCIJGML
                  (__this,(UnityEngine_SocialPlatforms_Range_o)CMHCEEPDACF,CMHCEEPDACF_00,in_x3);
        Nekki_SF2_GUI_TableView__DOGOHNGEGLE
                  (__this,(UnityEngine_SocialPlatforms_Range_o)CMHCEEPDACF,CMHCEEPDACF_00,in_x3);
        pKVar5 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
        if (pKVar5 == (KELJDKIIHMM_o *)0x0) goto LAB_031da34c;
        (pKVar5->fields).CIMDIANAHIM.fields.from = CMHCEEPDACF_00.fields.from;
        (pKVar5->fields).CIMDIANAHIM.fields.count = CMHCEEPDACF_00.fields.count;
      }
    }
  }
  return;
}


// ===== private void DNBKCEFLDHP()  [RVA 0x30D9C54]
// Nekki.SF2.GUI.TableView$$DNBKCEFLDHP @ RVA 0x30D9C54

void Nekki_SF2_GUI_TableView__DNBKCEFLDHP(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_TableView__NAOPHLEJGGL(__this,method);
  Nekki_SF2_GUI_TableView__BGOLOHLDFGK(__this,method_00);
  return;
}


// ===== public int FindIndexOfRowAtPosition(float BLEOKMIDGIK, int KBAJGAHMEAF, int HLBLCOAJBLM)  [RVA 0x30DA55C]
// Nekki.SF2.GUI.TableView$$FindIndexOfRowAtPosition @ RVA 0x30DA55C

int32_t Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition
                  (Nekki_SF2_GUI_TableView_o *__this,float BLEOKMIDGIK,int32_t KBAJGAHMEAF,
                  int32_t HLBLCOAJBLM,MethodInfo *method)

{
  int iVar1;
  uint JDEFJPHCNMM;
  MethodInfo *method_00;
  uint JDEFJPHCNMM_00;
  float fVar3;
  float fVar4;
  MethodInfo *pMVar2;
  
  method_00 = (MethodInfo *)(ulong)(uint)HLBLCOAJBLM;
  pMVar2 = method_00;
  if (KBAJGAHMEAF < HLBLCOAJBLM) {
    do {
      JDEFJPHCNMM_00 = (uint)pMVar2;
      if (JDEFJPHCNMM_00 - KBAJGAHMEAF == 1) {
        fVar3 = Nekki_SF2_GUI_TableView__PositionForRow(__this,KBAJGAHMEAF,method_00);
        fVar4 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM_00,method_00);
        if (ABS(BLEOKMIDGIK - fVar4) < ABS(BLEOKMIDGIK - fVar3)) {
          return JDEFJPHCNMM_00;
        }
        return KBAJGAHMEAF;
      }
      iVar1 = JDEFJPHCNMM_00 + KBAJGAHMEAF;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      JDEFJPHCNMM = iVar1 >> 1;
      fVar3 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method_00);
      if (BLEOKMIDGIK <= fVar3) {
        JDEFJPHCNMM_00 = JDEFJPHCNMM;
        JDEFJPHCNMM = KBAJGAHMEAF;
      }
      KBAJGAHMEAF = JDEFJPHCNMM;
      pMVar2 = (MethodInfo *)(ulong)JDEFJPHCNMM_00;
    } while (KBAJGAHMEAF < (int)JDEFJPHCNMM_00);
  }
  return KBAJGAHMEAF;
}


// ===== public void set_Delegate(MLIIECFHJAM CJNHFNHJHPE)  [RVA 0x30DA604]
// Nekki.SF2.GUI.TableView$$set_Delegate @ RVA 0x30DA604

void Nekki_SF2_GUI_TableView__set_Delegate
               (Nekki_SF2_GUI_TableView_o *__this,MLIIECFHJAM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CFMPOFMLMKK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void DPFEFNDJCIG(int JDEFJPHCNMM)  [RVA 0x30DA60C]
// Nekki.SF2.GUI.TableView$$DPFEFNDJCIG @ RVA 0x30DA60C

void Nekki_SF2_GUI_TableView__DPFEFNDJCIG
               (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  MLIIECFHJAM_c *pMVar3;
  ulong uVar4;
  int32_t *piVar5;
  MLIIECFHJAM_o *pMVar6;
  
  if ((DAT_04566349 & 1) == 0) {
    FUN_01bab630(&MLIIECFHJAM_TypeInfo,(ulong)(uint)JDEFJPHCNMM);
    DAT_04566349 = 1;
  }
  pMVar6 = (__this->fields).CFMPOFMLMKK;
  if (pMVar6 == (MLIIECFHJAM_o *)0x0) {
    return;
  }
  pMVar3 = pMVar6->klass;
  uVar1._0_1_ = (pMVar3->_2).rank;
  uVar1._1_1_ = (pMVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pMVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)MLIIECFHJAM_TypeInfo) {
        pVVar2 = pMVar3->vtable + *piVar5;
        goto LAB_031da6a4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar6,MLIIECFHJAM_TypeInfo,0);
LAB_031da6a4:
                    /* WARNING: Could not recover jumptable at 0x031da6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pMVar6,__this,(ulong)(uint)JDEFJPHCNMM,pVVar2->method);
  return;
}


// ===== private void LDHGBDGHOKI()  [RVA 0x30DA6C0]
// Nekki.SF2.GUI.TableView$$LDHGBDGHOKI @ RVA 0x30DA6C0

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TableView__LDHGBDGHOKI(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t JDEFJPHCNMM;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_0456634a & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456634a = 1;
    method = extraout_x1;
  }
  (__this->fields).PIHMBLAFPBJ = false;
  pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  method_02 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields).IDIMFLMKDMD;
  if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
    fVar4 = (pNVar2->fields).super.CDHNBOKGCCN.fields.x;
    fVar5 = (pNVar2->fields).super.CDHNBOKGCCN.fields.y;
    if (ABS(fVar4 * fVar4 + fVar5 * fVar5) <= 1e-10) {
      return;
    }
    pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((__this->fields).tableViewOrientation != 0) {
      fVar5 = -fVar4;
    }
    if (pNVar3 != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
      JDEFJPHCNMM = (pNVar3->fields).FIMCNHGPCNA;
      fVar5 = fVar5 * 0.5;
      method_00 = extraout_x1_00;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      if (ABS((__this->fields)._MinScrollVelocity * 0.5) <= ABS(fVar5)) {
        JDEFJPHCNMM = Nekki_SF2_GUI_TableView__GetNearestCellRow(__this,fVar5,method_00);
      }
      pNVar2 = (__this->fields).IDIMFLMKDMD;
      if (DAT_0455fa75 == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa75 = '\x01';
      }
      if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
        (pNVar2->fields).super.CDHNBOKGCCN.fields =
             (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
        pNVar2 = (__this->fields).IDIMFLMKDMD;
        if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
          fVar6 = (pNVar2->fields).super.CDHNBOKGCCN.fields.x;
          fVar4 = (pNVar2->fields).super.CDHNBOKGCCN.fields.y;
          if (DAT_045602fb == '\0') {
            FUN_01bab630(&System_Math_TypeInfo);
            DAT_045602fb = '\x01';
          }
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          fVar5 = ABS((float)(int)(fVar5 / SQRT(fVar6 * fVar6 + fVar4 * fVar4)));
          if (0.5 < fVar5) {
            fVar5 = 0.5;
          }
          fVar4 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,method_02);
          Nekki_SF2_GUI_TableView__SetPosition(__this,fVar4,fVar5,method_01);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_StartOffset()  [RVA 0x30DA9A4]
// Nekki.SF2.GUI.TableView$$get_StartOffset @ RVA 0x30DA9A4

float Nekki_SF2_GUI_TableView__get_StartOffset(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectOffset_o *__this_00;
  
  __this_00 = (__this->fields).padding;
  if (__this_00 != (UnityEngine_RectOffset_o *)0x0) {
    if ((__this->fields).tableViewOrientation == 0) {
      iVar1 = UnityEngine_RectOffset__get_top(__this_00,(MethodInfo *)0x0);
    }
    else {
      iVar1 = UnityEngine_RectOffset__get_left(__this_00,(MethodInfo *)0x0);
    }
    return (float)iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FJPJBCIJGML(Range DFBACAOEOAJ, Range HIFNAFEEFBF)  [RVA 0x30DA474]
// Nekki.SF2.GUI.TableView$$FJPJBCIJGML @ RVA 0x30DA474

void Nekki_SF2_GUI_TableView__FJPJBCIJGML
               (Nekki_SF2_GUI_TableView_o *__this,UnityEngine_SocialPlatforms_Range_o DFBACAOEOAJ,
               UnityEngine_SocialPlatforms_Range_o HIFNAFEEFBF,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_SocialPlatforms_Range_Fields method_00;
  
  method_00 = HIFNAFEEFBF.fields;
  if (DFBACAOEOAJ.fields.from < HIFNAFEEFBF.fields.from) {
    iVar1 = HIFNAFEEFBF.fields.from - DFBACAOEOAJ.fields.from;
    do {
      Nekki_SF2_GUI_TableView__IGJGHJDHOKD(__this,false,(MethodInfo *)method_00);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  for (iVar1 = LECDDPFLBEM__KIKGKKGDCKK(HIFNAFEEFBF,(MethodInfo *)0x0);
      iVar2 = LECDDPFLBEM__KIKGKKGDCKK(DFBACAOEOAJ,(MethodInfo *)0x0), iVar1 < iVar2;
      iVar1 = iVar1 + 1) {
    Nekki_SF2_GUI_TableView__IGJGHJDHOKD(__this,true,(MethodInfo *)method_00);
  }
  return;
}


// ===== private void KGDGDCKDLKG(int JDEFJPHCNMM, bool IEBOPHEHOFH)  [RVA 0x30D8BF4]
// Nekki.SF2.GUI.TableView$$KGDGDCKDLKG @ RVA 0x30D8BF4

void Nekki_SF2_GUI_TableView__KGDGDCKDLKG
               (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,bool IEBOPHEHOFH,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  Nekki_SF2_GUI_TableViewCell_o *HBHBCBJANIC;
  MethodInfo *in_x4;
  CPFMNHBNOEN_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CPFMNHBNOEN_o *pCVar7;
  
  if ((DAT_0456634b & 1) == 0) {
    FUN_01bab630(&CPFMNHBNOEN_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12800/*"TableView::CreateCell: didn't create cell"*/);
    DAT_0456634b = 1;
  }
  pCVar7 = (__this->fields).NFKFGFPBGDA;
  if (pCVar7 == (CPFMNHBNOEN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPFMNHBNOEN_TypeInfo) {
        pVVar3 = pCVar4->vtable + (*piVar6 + 2);
        goto LAB_031d8cb8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CPFMNHBNOEN_TypeInfo,2);
LAB_031d8cb8:
  HBHBCBJANIC = (Nekki_SF2_GUI_TableViewCell_o *)
                (*pVVar3->methodPtr)(pCVar7,__this,(ulong)(uint)JDEFJPHCNMM,pVVar3->method);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)HBHBCBJANIC,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12800/*"TableView::CreateCell: didn't create cell"*/,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_TableView__LBGGFHONFIG(__this,HBHBCBJANIC,JDEFJPHCNMM,IEBOPHEHOFH,in_x4);
  return;
}


// ===== public float PositionForRow(int JDEFJPHCNMM)  [RVA 0x30D89AC]
// Nekki.SF2.GUI.TableView$$PositionForRow @ RVA 0x30D89AC

float Nekki_SF2_GUI_TableView__PositionForRow
                (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  int32_t iVar1;
  KMAKOOHEKNB_o *pKVar2;
  float fVar3;
  float fVar4;
  
  if ((-1 < JDEFJPHCNMM) &&
     (iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(__this,(MethodInfo *)(ulong)(uint)JDEFJPHCNMM),
     JDEFJPHCNMM <= iVar1 + -1)) {
    pKVar2 = (__this->fields).HCLHHHKCABP;
    if (pKVar2 != (KMAKOOHEKNB_o *)0x0) {
      fVar3 = KMAKOOHEKNB__GOFGJILDJLA(pKVar2,JDEFJPHCNMM,(MethodInfo *)0x0);
      pKVar2 = (__this->fields).HCLHHHKCABP;
      if (pKVar2 != (KMAKOOHEKNB_o *)0x0) {
        fVar4 = KMAKOOHEKNB__HGJGLBLDDHF(pKVar2,JDEFJPHCNMM,(MethodInfo *)0x0);
        return (__this->fields).MENMAPNCLAH + fVar3 + fVar4 * -0.5;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0.0;
}


// ===== public TableViewScroll get_Scroll()  [RVA 0x30DA9E0]
// Nekki.SF2.GUI.TableView$$get_Scroll @ RVA 0x30DA9E0

Nekki_SF2_GUI_TableViewScroll_o *
Nekki_SF2_GUI_TableView__get_Scroll(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields).IDIMFLMKDMD;
}


// ===== public int GetCurrentCellRow()  [RVA 0x30D8AE8]
// Nekki.SF2.GUI.TableView$$GetCurrentCellRow @ RVA 0x30D8AE8

int32_t Nekki_SF2_GUI_TableView__GetCurrentCellRow
                  (Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  
  if ((DAT_0456634c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456634c = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (pNVar3->fields).FIMCNHGPCNA;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


// ===== public void KillTween()  [RVA 0x30DA1EC]
// Nekki.SF2.GUI.TableView$$KillTween @ RVA 0x30DA1EC

void Nekki_SF2_GUI_TableView__KillTween(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  
  ppDVar1 = &(__this->fields).OGBOMAHLDKN;
  if (*ppDVar1 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    return;
  }
  return;
}


// ===== private void BGOLOHLDFGK()  [RVA 0x30DA4F4]
// Nekki.SF2.GUI.TableView$$BGOLOHLDFGK @ RVA 0x30DA4F4

void Nekki_SF2_GUI_TableView__BGOLOHLDFGK(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_SocialPlatforms_Range_o UVar2;
  MethodInfo *in_x3;
  KELJDKIIHMM_o *pKVar3;
  ulong uVar4;
  int iVar5;
  
  UVar2 = Nekki_SF2_GUI_TableView__GFAFEFPKGLH(__this,method);
  iVar5 = UVar2.fields.count;
  if (0 < iVar5) {
    uVar4 = (ulong)UVar2.fields & 0xffffffff;
    iVar1 = iVar5;
    do {
      Nekki_SF2_GUI_TableView__KGDGDCKDLKG(__this,(int32_t)uVar4,true,in_x3);
      iVar1 = iVar1 + -1;
      uVar4 = (ulong)((int32_t)uVar4 + 1);
    } while (iVar1 != 0);
  }
  pKVar3 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (pKVar3 != (KELJDKIIHMM_o *)0x0) {
    (pKVar3->fields).CIMDIANAHIM.fields.from = UVar2.fields.from;
    (pKVar3->fields).CIMDIANAHIM.fields.count = iVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsMoving()  [RVA 0x30DA9E8]
// Nekki.SF2.GUI.TableView$$get_IsMoving @ RVA 0x30DA9E8

bool Nekki_SF2_GUI_TableView__get_IsMoving(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Tween_o *t;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  float fVar3;
  float fVar4;
  
  t = (__this->fields).OGBOMAHLDKN;
  if ((t != (DG_Tweening_Tween_o *)0x0) &&
     (bVar1 = DG_Tweening_TweenExtensions__IsPlaying(t,(MethodInfo *)0x0), bVar1)) {
    return true;
  }
  pNVar2 = (__this->fields).IDIMFLMKDMD;
  if (pNVar2 != (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
    fVar3 = (pNVar2->fields).super.CDHNBOKGCCN.fields.x;
    fVar4 = (pNVar2->fields).super.CDHNBOKGCCN.fields.y;
    bVar1 = Util__KEJBDHBDGNI(fVar3 * fVar3 + fVar4 * fVar4,1e-10,(MethodInfo *)0x0);
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int NumberOfRows()  [RVA 0x30D9BB0]
// Nekki.SF2.GUI.TableView$$NumberOfRows @ RVA 0x30D9BB0

int32_t Nekki_SF2_GUI_TableView__NumberOfRows(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  VirtualInvokeData *pVVar3;
  CPFMNHBNOEN_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CPFMNHBNOEN_o *pCVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_0456634d & 1) == 0) {
    auVar8 = FUN_01bab630(&CPFMNHBNOEN_TypeInfo);
    DAT_0456634d = 1;
  }
  pCVar7 = (__this->fields).NFKFGFPBGDA;
  if (pCVar7 == (CPFMNHBNOEN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CPFMNHBNOEN_TypeInfo) {
        pVVar3 = pCVar4->vtable + *piVar6;
        goto LAB_031d9c38;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CPFMNHBNOEN_TypeInfo,0);
LAB_031d9c38:
                    /* WARNING: Could not recover jumptable at 0x031d9c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*pVVar3->methodPtr)(pCVar7,__this,pVVar3->method);
  return iVar2;
}


// ===== public void .ctor()  [RVA 0x30DAA48]
// Nekki.SF2.GUI.TableView$$.ctor @ RVA 0x30DAA48

void Nekki_SF2_GUI_TableView___ctor(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o **ppNVar1;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
  if ((DAT_0456634e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TableView_SelectCellEvent_TypeInfo);
    DAT_0456634e = 1;
    method = extraout_x1;
  }
  (__this->fields).inertia = true;
  (__this->fields).decelerationRate = 0.135;
  (__this->fields).scrollToHighlighted = true;
  (__this->fields).elasticity = 0.1;
  (__this->fields).scrollSensitivity = 1.0;
  (__this->fields).AddMask = true;
  auVar2 = thunk_FUN_01bda818(Nekki_SF2_GUI_TableView_SelectCellEvent_TypeInfo,method);
  __this_00 = auVar2._0_8_;
  Nekki_SF2_GUI_TableView_SelectCellEvent___ctor(__this_00,auVar2._8_8_);
  ppNVar1 = &(__this->fields).onSelectCell;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public TableViewCell ReusableCellForRow(int JDEFJPHCNMM)  [RVA 0x30DAB20]
// Nekki.SF2.GUI.TableView$$ReusableCellForRow @ RVA 0x30DAB20

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__ReusableCellForRow
          (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  bool bVar1;
  IKGDKGBHEFN_o *__this_00;
  Nekki_SF2_GUI_TableViewCell_o *pNVar2;
  MethodInfo *method_00;
  
  if ((DAT_0456634f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456634f = 1;
  }
  __this_00 = (__this->fields).MKCAEDADDII;
  if (__this_00 == (IKGDKGBHEFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar2 = IKGDKGBHEFN__AJPALGCGEHB(__this_00,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = Nekki_SF2_GUI_TableView__KLAGNKHFMCE(__this,JDEFJPHCNMM,method_00);
    return pNVar2;
  }
  return pNVar2;
}


// ===== private void NAOPHLEJGGL()  [RVA 0x30D9B30]
// Nekki.SF2.GUI.TableView$$NAOPHLEJGGL @ RVA 0x30D9B30

void Nekki_SF2_GUI_TableView__NAOPHLEJGGL(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  KELJDKIIHMM_o *pKVar2;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_TableViewCell_o **ppNVar3;
  UnityEngine_SocialPlatforms_Range_Fields local_18;
  
  pKVar2 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  do {
    if (pKVar2 == (KELJDKIIHMM_o *)0x0) {
LAB_031d9b68:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = KELJDKIIHMM__LDJLMEFOMLG(pKVar2,(MethodInfo *)0x0);
    if (iVar1 < 1) {
      pKVar2 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
      local_18.from = 0;
      local_18.count = 0;
      UnityEngine_SocialPlatforms_Range___ctor
                ((UnityEngine_SocialPlatforms_Range_o)&local_18,0,0,(MethodInfo *)0x0);
      if (pKVar2 != (KELJDKIIHMM_o *)0x0) {
        (pKVar2->fields).CIMDIANAHIM.fields = local_18;
        ppNVar3 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
        *ppNVar3 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
        thunk_FUN_01c20e04(ppNVar3,0);
        return;
      }
      goto LAB_031d9b68;
    }
    Nekki_SF2_GUI_TableView__IGJGHJDHOKD(__this,false,in_x2);
    pKVar2 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  } while( true );
}


// ===== private void LOIGGEHCNPI()  [RVA 0x30DABBC]
// Nekki.SF2.GUI.TableView$$LOIGGEHCNPI @ RVA 0x30DABBC

void Nekki_SF2_GUI_TableView__LOIGGEHCNPI(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566350 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
    DAT_04566350 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).onSelectCell;
  if (__this_00 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
               (Il2CppObject *)(__this->fields)._LDAHBFIIBJJ_k__BackingField,
               Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void set_Spacing(float CJNHFNHJHPE)  [RVA 0x30DAC10]
// Nekki.SF2.GUI.TableView$$set_Spacing @ RVA 0x30DAC10

void Nekki_SF2_GUI_TableView__set_Spacing
               (Nekki_SF2_GUI_TableView_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  KMAKOOHEKNB_o *pKVar1;
  
  pKVar1 = (__this->fields).HCLHHHKCABP;
  (__this->fields)._spacing = CJNHFNHJHPE;
  if (pKVar1 != (KMAKOOHEKNB_o *)0x0) {
    (pKVar1->fields).KPGBDEPEHJD = CJNHFNHJHPE;
  }
  return;
}


// ===== private Range GFAFEFPKGLH()  [RVA 0x30DA350]
// Nekki.SF2.GUI.TableView$$GFAFEFPKGLH @ RVA 0x30DA350

UnityEngine_SocialPlatforms_Range_o
Nekki_SF2_GUI_TableView__GFAFEFPKGLH(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  KMAKOOHEKNB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x2;
  float fVar3;
  float fVar4;
  float val2;
  float fVar5;
  UnityEngine_SocialPlatforms_Range_Fields local_38;
  
  if ((DAT_04566351 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566351 = 1;
    method = extraout_x1;
  }
  fVar5 = (__this->fields).GMCDBHFHFGF;
  fVar3 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method);
  fVar4 = Nekki_SF2_GUI_TableView__PositionForRow(__this,0,in_x2);
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar3 = System_Math__Max(fVar5 + fVar3 * -1.5,fVar4,(MethodInfo *)0x0);
  fVar5 = (__this->fields).GMCDBHFHFGF;
  fVar4 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
  __this_00 = (__this->fields).HCLHHHKCABP;
  if (__this_00 != (KMAKOOHEKNB_o *)0x0) {
    iVar1 = KMAKOOHEKNB__IBLCNILBAHE(__this_00,(MethodInfo *)0x0);
    val2 = Nekki_SF2_GUI_TableView__PositionForRow(__this,iVar1 + -1,in_x2);
    fVar4 = System_Math__Min(fVar5 + fVar4 * 1.5,val2,(MethodInfo *)0x0);
    iVar1 = Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition(__this,fVar3,method_01);
    iVar2 = Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition(__this,fVar4,method_02);
    local_38.from = 0;
    local_38.count = 0;
    UnityEngine_SocialPlatforms_Range___ctor
              ((UnityEngine_SocialPlatforms_Range_o)&local_38,iVar1,(iVar2 - iVar1) + 1,
               (MethodInfo *)0x0);
    return (UnityEngine_SocialPlatforms_Range_o)local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetPosition(float NNEOOGABAAB, float LFJGFLNMBMC = 0)  [RVA 0x30D9EDC]
// Nekki.SF2.GUI.TableView$$SetPosition @ RVA 0x30D9EDC

void Nekki_SF2_GUI_TableView__SetPosition
               (Nekki_SF2_GUI_TableView_o *__this,float NNEOOGABAAB,float LFJGFLNMBMC,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  KMAKOOHEKNB_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *in_x2;
  DG_Tweening_Tween_o **ppDVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_04566352 & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_GFECOLFOILC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_KILOIOEILFL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_LOIGGEHCNPI__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                );
    DAT_04566352 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_TableView__KillTween(__this,method);
  if ((__this->fields).PIHMBLAFPBJ != false) {
    return;
  }
  fVar5 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
  fVar6 = Nekki_SF2_GUI_TableView__get_StartOffset(__this,method_01);
  fVar7 = Nekki_SF2_GUI_TableView__get_EndOffset(__this,method_02);
  fVar8 = Nekki_SF2_GUI_TableView__get_ContentSize(__this,method_03);
  fVar7 = (fVar5 - fVar6) - fVar7;
  fVar5 = Nekki_SF2_GUI_TableView__PositionForRow(__this,0,in_x2);
  fVar6 = 0.0;
  if (fVar7 < fVar8) {
    fVar6 = Nekki_SF2_GUI_TableView__get_StartOffset(__this,method_04);
  }
  __this_00 = (__this->fields).HCLHHHKCABP;
  if (__this_00 != (KMAKOOHEKNB_o *)0x0) {
    iVar2 = KMAKOOHEKNB__IBLCNILBAHE(__this_00,(MethodInfo *)0x0);
    fVar9 = Nekki_SF2_GUI_TableView__PositionForRow(__this,iVar2 + -1,in_x2);
    fVar10 = 0.0;
    if (fVar7 < fVar8) {
      fVar10 = Nekki_SF2_GUI_TableView__get_EndOffset(__this,method_05);
    }
    fVar7 = fVar9 - fVar10;
    if (NNEOOGABAAB <= fVar9 - fVar10) {
      fVar7 = NNEOOGABAAB;
    }
    if (NNEOOGABAAB < fVar5 + fVar6) {
      fVar7 = fVar5 + fVar6;
    }
    (__this->fields).LMBKODIDILL = fVar7;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
      if ((0.0 < LFJGFLNMBMC) && (bVar1)) {
        getter = (DG_Tweening_Core_DOGetter_float__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
        DG_Tweening_Core_DOGetter<float>___ctor();
        setter = (DG_Tweening_Core_DOSetter_float__o *)
                 thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
        DG_Tweening_Core_DOSetter<float>___ctor();
        fVar5 = (__this->fields).LMBKODIDILL;
        if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        t = DG_Tweening_DOTween__To(getter,setter,fVar5,LFJGFLNMBMC,(MethodInfo *)0x0);
        action = (DG_Tweening_TweenCallback_o *)
                 thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
        DG_Tweening_TweenCallback___ctor();
        pDVar3 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                           ((Il2CppObject *)t,action,
                            Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<float,_float,_FloatOptions>>__
                           );
        ppDVar4 = &(__this->fields).OGBOMAHLDKN;
        *ppDVar4 = pDVar3;
        thunk_FUN_01c20e04(ppDVar4);
        return;
      }
      Nekki_SF2_GUI_TableView__GFECOLFOILC(__this,(__this->fields).LMBKODIDILL,method_06);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DFKBPGLFOPK()  [RVA 0x30DACA0]
// Nekki.SF2.GUI.TableView$$DFKBPGLFOPK @ RVA 0x30DACA0

void Nekki_SF2_GUI_TableView__DFKBPGLFOPK(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  KMAKOOHEKNB_o *__this_00;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_TableViewCell_o **ppNVar2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  Nekki_SF2_GUI_TableViewCell_o *y;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_04566353 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
    DAT_04566353 = 1;
    method = extraout_x1;
  }
  if (ABS((__this->fields).PLICNBJGDFL) <= 50.0) {
    ppNVar2 = &(__this->fields)._LDAHBFIIBJJ_k__BackingField;
    pNVar3 = *ppNVar2;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    method_01 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_00;
    if (bVar1) {
      if (*ppNVar2 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) goto LAB_031dae08;
      fVar6 = (__this->fields).GMCDBHFHFGF;
      fVar4 = Nekki_SF2_GUI_TableView__PositionForRow
                        (__this,((*ppNVar2)->fields).FIMCNHGPCNA,method_01);
      pNVar3 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
      if ((pNVar3 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) ||
         (__this_00 = (__this->fields).HCLHHHKCABP, __this_00 == (KMAKOOHEKNB_o *)0x0))
      goto LAB_031dae08;
      fVar5 = KMAKOOHEKNB__HGJGLBLDDHF(__this_00,(pNVar3->fields).FIMCNHGPCNA,(MethodInfo *)0x0);
      method_00 = extraout_x1_01;
      if (ABS(fVar6 - fVar4) <= fVar5 * 0.5 + (__this->fields)._spacing * 0.5) {
        return;
      }
    }
    pNVar3 = Nekki_SF2_GUI_TableView__MNKOGBDLIHK(__this,method_00);
    y = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._LDAHBFIIBJJ_k__BackingField = pNVar3;
      thunk_FUN_01c20e04(ppNVar2,pNVar3);
      __this_01 = (__this->fields).onSelectCell;
      if (__this_01 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(Il2CppObject *)*ppNVar2,
                   Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
        return;
      }
LAB_031dae08:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private void Update()  [RVA 0x30DAE0C]
// Nekki.SF2.GUI.TableView$$Update @ RVA 0x30DAE0C

void Nekki_SF2_GUI_TableView__Update(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  bool bVar1;
  DG_Tweening_Tween_o *t;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TableViewScroll_o *pNVar2;
  
  if ((DAT_04566354 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566354 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).IDIMFLMKDMD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  t = (__this->fields).OGBOMAHLDKN;
  method_00 = extraout_x1_00;
  if ((t == (DG_Tweening_Tween_o *)0x0) ||
     (bVar1 = DG_Tweening_TweenExtensions__IsActive(t,(MethodInfo *)0x0), method_00 = extraout_x1_01
     , !bVar1)) {
    pNVar2 = (__this->fields).IDIMFLMKDMD;
    if (pNVar2 == (Nekki_SF2_GUI_TableViewScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this->fields).PLICNBJGDFL = (pNVar2->fields).super.CDHNBOKGCCN.fields.y;
  }
  if ((__this->fields).EIOEGKDNAJK != false) {
    Nekki_SF2_GUI_TableView__ReloadData(__this,method_00);
    method_00 = extraout_x1_02;
  }
  if ((__this->fields).FNIBBMLOJIJ != false) {
    Nekki_SF2_GUI_TableView__BFHNEAPPOFM(__this,method_00);
    method_00 = extraout_x1_03;
  }
  if ((__this->fields).IsLockSelection != false) {
    return;
  }
  Nekki_SF2_GUI_TableView__DFKBPGLFOPK(__this,method_00);
  return;
}


// ===== private void PEBNCHIIKID(Vector2 HMAKEBHBDEI)  [RVA 0x30DAED4]
// Nekki.SF2.GUI.TableView$$PEBNCHIIKID @ RVA 0x30DAED4

void Nekki_SF2_GUI_TableView__PEBNCHIIKID
               (Nekki_SF2_GUI_TableView_o *__this,UnityEngine_Vector2_o HMAKEBHBDEI,
               MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 1.0 - HMAKEBHBDEI.fields.y;
  if ((__this->fields).tableViewOrientation != 0) {
    fVar3 = HMAKEBHBDEI.fields.x;
  }
  fVar1 = Nekki_SF2_GUI_TableView__get_ContentSize(__this,method);
  fVar2 = Nekki_SF2_GUI_TableView__MAGEKPGDFOA(__this,method_00);
  (__this->fields).GMCDBHFHFGF = fVar1 * fVar3 + fVar2 * 0.5;
  (__this->fields).FNIBBMLOJIJ = true;
  return;
}


// ===== private float MAGEKPGDFOA()  [RVA 0x30D9430]
// Nekki.SF2.GUI.TableView$$MAGEKPGDFOA @ RVA 0x30D9430

float Nekki_SF2_GUI_TableView__MAGEKPGDFOA(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  float fVar1;
  UnityEngine_Rect_o UVar2;
  
  if ((DAT_04566355 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566355 = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00->klass == UnityEngine_RectTransform_TypeInfo)) {
    UVar2 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.m_Height;
    if ((__this->fields).tableViewOrientation != 0) {
      fVar1 = UVar2.fields.m_Width;
    }
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_EndOffset()  [RVA 0x30DAC64]
// Nekki.SF2.GUI.TableView$$get_EndOffset @ RVA 0x30DAC64

float Nekki_SF2_GUI_TableView__get_EndOffset(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectOffset_o *__this_00;
  
  __this_00 = (__this->fields).padding;
  if (__this_00 != (UnityEngine_RectOffset_o *)0x0) {
    if ((__this->fields).tableViewOrientation == 0) {
      iVar1 = UnityEngine_RectOffset__get_bottom(__this_00,(MethodInfo *)0x0);
    }
    else {
      iVar1 = UnityEngine_RectOffset__get_right(__this_00,(MethodInfo *)0x0);
    }
    return (float)iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_CellPrefab(GameObject CJNHFNHJHPE)  [RVA 0x30DAF2C]
// Nekki.SF2.GUI.TableView$$set_CellPrefab @ RVA 0x30DAF2C

void Nekki_SF2_GUI_TableView__set_CellPrefab
               (Nekki_SF2_GUI_TableView_o *__this,UnityEngine_GameObject_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).KFCHMBGIPJK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public float get_LastTargetPosition()  [RVA 0x30DAF34]
// Nekki.SF2.GUI.TableView$$get_LastTargetPosition @ RVA 0x30DAF34

float Nekki_SF2_GUI_TableView__get_LastTargetPosition
                (Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  return (__this->fields).LMBKODIDILL;
}


// ===== public int FindIndexOfRowAtPosition(float BLEOKMIDGIK)  [RVA 0x30DAC24]
// Nekki.SF2.GUI.TableView$$FindIndexOfRowAtPosition @ RVA 0x30DAC24

int32_t Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition
                  (Nekki_SF2_GUI_TableView_o *__this,float BLEOKMIDGIK,MethodInfo *method)

{
  int32_t iVar1;
  KMAKOOHEKNB_o *__this_00;
  MethodInfo *in_x3;
  
  __this_00 = (__this->fields).HCLHHHKCABP;
  if (__this_00 != (KMAKOOHEKNB_o *)0x0) {
    iVar1 = KMAKOOHEKNB__IBLCNILBAHE(__this_00,(MethodInfo *)0x0);
    iVar1 = Nekki_SF2_GUI_TableView__FindIndexOfRowAtPosition(__this,BLEOKMIDGIK,0,iVar1 + -1,in_x3)
    ;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetNearestCellRow(float HKLGABDKEOD)  [RVA 0x30DA8B8]
// Nekki.SF2.GUI.TableView$$GetNearestCellRow @ RVA 0x30DA8B8

int32_t Nekki_SF2_GUI_TableView__GetNearestCellRow
                  (Nekki_SF2_GUI_TableView_o *__this,float HKLGABDKEOD,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar4;
  int JDEFJPHCNMM;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pNVar4 = (__this->fields)._LDAHBFIIBJJ_k__BackingField;
  if (pNVar4 == (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  JDEFJPHCNMM = (pNVar4->fields).FIMCNHGPCNA;
  if (HKLGABDKEOD != 0.0) {
    fVar7 = (__this->fields).GMCDBHFHFGF + HKLGABDKEOD;
    fVar5 = Nekki_SF2_GUI_TableView__PositionForRow(__this,JDEFJPHCNMM,in_x2);
    if (HKLGABDKEOD <= 0.0) {
      iVar1 = JDEFJPHCNMM;
      if (JDEFJPHCNMM == 0) {
        JDEFJPHCNMM = 0;
      }
      else {
        do {
          JDEFJPHCNMM = iVar1;
          iVar1 = JDEFJPHCNMM + -1;
          if (iVar1 < 0) {
            return JDEFJPHCNMM;
          }
          fVar6 = Nekki_SF2_GUI_TableView__PositionForRow(__this,iVar1,in_x2);
          fVar2 = fVar7 - fVar5;
          fVar5 = fVar6;
        } while (ABS(fVar7 - fVar6) < ABS(fVar2));
      }
    }
    else {
      iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(__this,method_00);
      method_01 = extraout_x1;
      iVar1 = JDEFJPHCNMM;
      if (JDEFJPHCNMM != iVar3 + -1) {
        do {
          JDEFJPHCNMM = iVar1;
          iVar1 = JDEFJPHCNMM + 1;
          iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(__this,method_01);
          if (iVar3 <= iVar1) {
            return JDEFJPHCNMM;
          }
          fVar6 = Nekki_SF2_GUI_TableView__PositionForRow(__this,iVar1,in_x2);
          fVar2 = fVar7 - fVar5;
          method_01 = extraout_x1_00;
          fVar5 = fVar6;
        } while (ABS(fVar7 - fVar6) < ABS(fVar2));
      }
    }
  }
  return JDEFJPHCNMM;
}

