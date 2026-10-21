// TypeDefIndex 1417
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanLogoAttributeContainer : MonoBehaviour
// Fields:
//   public const float SCROLL_TIME = 0.2;
//   public const Ease SCROLL_EASE = 5;
//   private SimpleScroll _scroll; // 0x20
//   private GameObject _sliderItemPrefab; // 0x28
//   private ResolutionButton _slideForward; // 0x30
//   private ResolutionButton _slideBackward; // 0x38
//   private List<IILNJJJFGLL> KNPKLNHJLEN; // 0x40
//   private DFHAHEOKHFA NEFMLODIKPE; // 0x48
//   private Action<DFHAHEOKHFA> FJKKBHOCDFI; // 0x50
//   private float FDMLNHPDHKJ; // 0x58
//   private float JKOANJLODNP; // 0x5C
//   private bool PNIMHIAPIMJ; // 0x60

// ===== private void GLOCHFIDALL(Action<DFHAHEOKHFA> CJNHFNHJHPE)  [RVA 0x317E63C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$GLOCHFIDALL @ RVA 0x317E63C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GLOCHFIDALL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               System_Action_DFHAHEOKHFA__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_DFHAHEOKHFA__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_DFHAHEOKHFA__o *pSVar5;
  System_Action_DFHAHEOKHFA__o **ppSVar6;
  System_Action_DFHAHEOKHFA__o *a;
  
  if ((DAT_045669a6 & 1) == 0) {
    FUN_01bab630(&System_Action<DFHAHEOKHFA>_TypeInfo);
    DAT_045669a6 = 1;
  }
  ppSVar6 = &(__this->fields).FJKKBHOCDFI;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<DFHAHEOKHFA>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<DFHAHEOKHFA>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_DFHAHEOKHFA__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void OnScroll(BaseScrollItem OOOCEFEJKCI)  [RVA 0x317E6EC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$OnScroll @ RVA 0x317E6EC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__OnScroll
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               Nekki_SF2_GUI_BaseScrollItem_o *OOOCEFEJKCI,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  byte bVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Action_DFHAHEOKHFA__o *pSVar4;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar5;
  Nekki_SF2_GUI_BaseScrollItem_c *pNVar6;
  Il2CppClass *pIVar7;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045669a7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    DAT_045669a7 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).PNIMHIAPIMJ != false) {
    pSVar4 = (__this->fields).FJKKBHOCDFI;
    if (pSVar4 == (System_Action_DFHAHEOKHFA__o *)0x0) goto LAB_0327e8a4;
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,(__this->fields).NEFMLODIKPE,
               (pSVar4->fields).super.super.method);
  }
  pNVar5 = (__this->fields)._scroll;
  if ((pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar5->fields)._snapEase,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,__this_00,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      if (!bVar3) break;
      if (local_50.fields._current == (Il2CppObject *)0x0) {
LAB_0327e8a0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar7 = (local_50.fields._current)->klass;
      bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo->_2).naturalAligment
      ;
      if (((pIVar7->_2).naturalAligment < bVar2) ||
         ((pIVar7->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo))
      goto LAB_0327e8a0;
      pIVar1 = local_50.fields._current;
      if ((pIVar7->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo) {
        pIVar1 = (Il2CppObject *)0x0;
      }
      (*pIVar1->klass->vtable[0x34].methodPtr)
                ((ulong)(uint)(__this->fields).JKOANJLODNP,pIVar1,pIVar1->klass->vtable[0x34].method
                );
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
    if (OOOCEFEJKCI != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
      pNVar6 = OOOCEFEJKCI->klass;
      bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo->_2).naturalAligment
      ;
      if ((bVar2 <= (pNVar6->_2).naturalAligment) &&
         ((pNVar6->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeCell_TypeInfo)) {
        (*pNVar6[1]._1.image)((__this->fields).FDMLNHPDHKJ,OOOCEFEJKCI,pNVar6[1]._1.gc_desc);
        return;
      }
    }
  }
LAB_0327e8a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LNAECHIOFNK(bool CJNHFNHJHPE)  [RVA 0x317E918]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$LNAECHIOFNK @ RVA 0x317E918

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LNAECHIOFNK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionButton_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields)._slideForward;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._slideBackward;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EBKJEBDMKLC(Action<DFHAHEOKHFA> CJNHFNHJHPE)  [RVA 0x317E974]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$EBKJEBDMKLC @ RVA 0x317E974

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__EBKJEBDMKLC
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               System_Action_DFHAHEOKHFA__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_DFHAHEOKHFA__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_DFHAHEOKHFA__o *pSVar5;
  System_Action_DFHAHEOKHFA__o **ppSVar6;
  System_Action_DFHAHEOKHFA__o *source;
  
  if ((DAT_045669a8 & 1) == 0) {
    FUN_01bab630(&System_Action<DFHAHEOKHFA>_TypeInfo);
    DAT_045669a8 = 1;
  }
  ppSVar6 = &(__this->fields).FJKKBHOCDFI;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<DFHAHEOKHFA>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<DFHAHEOKHFA>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_DFHAHEOKHFA__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public int GetItemsCount()  [RVA 0x317EA24]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$GetItemsCount @ RVA 0x317EA24

int32_t Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetItemsCount
                  (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
                  MethodInfo *method)

{
  System_Collections_Generic_List_IILNJJJFGLL__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_045669a9 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>_get_Count__);
    DAT_045669a9 = 1;
  }
  pSVar1 = (__this->fields).KNPKLNHJLEN;
  if (pSVar1 != (System_Collections_Generic_List_IILNJJJFGLL__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private void Update()  [RVA 0x317EA6C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$Update @ RVA 0x317EA6C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__Update
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               MethodInfo *method)

{
  bool CJNHFNHJHPE;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    CJNHFNHJHPE = Nekki_SF2_GUI_SimpleScroll__IsNotMovingAndNotDraggingFrames
                            (__this_00,0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LNAECHIOFNK
              (__this,CJNHFNHJHPE,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetItems(List<IILNJJJFGLL> GHAAKPDHIJJ)  [RVA 0x317EA9C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$SetItems @ RVA 0x317EA9C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetItems
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               System_Collections_Generic_List_IILNJJJFGLL__o *GHAAKPDHIJJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  System_Collections_Generic_List_IILNJJJFGLL__o **ppSVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045669aa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ClanLogoAttributeCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>_GetEnumerator__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045669aa = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  ppSVar4 = &(__this->fields).KNPKLNHJLEN;
  *ppSVar4 = GHAAKPDHIJJ;
  (__this->fields).PNIMHIAPIMJ = false;
  thunk_FUN_01c20e04(ppSVar4,GHAAKPDHIJJ);
  pNVar3 = (__this->fields)._scroll;
  if ((pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar3,(MethodInfo *)0x0),
     GHAAKPDHIJJ != (System_Collections_Generic_List_IILNJJJFGLL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
               Method_System_Collections_Generic_List<IILNJJJFGLL>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_MoveNext__
                             ), pIVar1 = local_70.fields._current, bVar2) {
      pUVar5 = (__this->fields)._sliderItemPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar5 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar5,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      IKKAMAMLIKA = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar5,
                               Method_UnityEngine_GameObject_GetComponent<ClanLogoAttributeCell>__);
      pNVar3 = (__this->fields)._scroll;
      if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_SimpleScroll__AddItem(pNVar3,IKKAMAMLIKA,true,(MethodInfo *)0x0);
      if (IKKAMAMLIKA == (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(code *)IKKAMAMLIKA->klass[1]._1.name)
                (IKKAMAMLIKA,pIVar1,(__this->fields)._scroll,IKKAMAMLIKA->klass[1]._1.namespaze);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<IILNJJJFGLL>_Dispose__);
    pNVar3 = (__this->fields)._scroll;
    if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ScrollToMedium(pNVar3,0.0,8,(MethodInfo *)0x0);
      (__this->fields).PNIMHIAPIMJ = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ForceInvokeOnScroll()  [RVA 0x317ED00]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$ForceInvokeOnScroll @ RVA 0x317ED00

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__ForceInvokeOnScroll
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ForceInvokeOnScroll(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HCOKJNGGENJ()  [RVA 0x317ED1C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$HCOKJNGGENJ @ RVA 0x317ED1C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__HCOKJNGGENJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LBBMPJKOINK(__this,-1,in_x2);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LNAECHIOFNK(__this,false,in_x2);
  EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x317ED70]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$.ctor @ RVA 0x317ED70

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_IILNJJJFGLL__o **ppSVar1;
  System_Action_DFHAHEOKHFA__o **ppSVar2;
  MethodInfo *extraout_x1;
  System_Action_DFHAHEOKHFA__o *pSVar3;
  
  if ((DAT_045669ab & 1) == 0) {
    FUN_01bab630(&System_Action<DFHAHEOKHFA>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IILNJJJFGLL>_TypeInfo);
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_FEGNDIMALAC__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo);
    DAT_045669ab = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IILNJJJFGLL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<IILNJJJFGLL>__ctor__);
  ppSVar1 = &(__this->fields).KNPKLNHJLEN;
  *ppSVar1 = (System_Collections_Generic_List_IILNJJJFGLL__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo->_2).cctor_finished
      == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo->static_fields
           ->__9__28_0;
  if (pSVar3 == (System_Action_DFHAHEOKHFA__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo->_2).
        cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_DFHAHEOKHFA__o *)thunk_FUN_01bda818(System_Action<DFHAHEOKHFA>_TypeInfo)
    ;
    System_Action<Int32Enum>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_<>c_TypeInfo->
               static_fields->__9__28_0;
    *ppSVar2 = pSVar3;
    thunk_FUN_01c20e04(ppSVar2,pSVar3);
  }
  ppSVar2 = &(__this->fields).FJKKBHOCDFI;
  *ppSVar2 = pSVar3;
  thunk_FUN_01c20e04(ppSVar2,pSVar3);
  (__this->fields).PNIMHIAPIMJ = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void SetFocusesScales(float LOJINJPNGHH, float DCJJPCIHILE)  [RVA 0x317EEB4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$SetFocusesScales @ RVA 0x317EEB4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetFocusesScales
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               float LOJINJPNGHH,float DCJJPCIHILE,MethodInfo *method)

{
  (__this->fields).FDMLNHPDHKJ = LOJINJPNGHH;
  (__this->fields).JKOANJLODNP = DCJJPCIHILE;
  return;
}


// ===== private void LBBMPJKOINK(int MJBMLNKAPGC)  [RVA 0x317ED48]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$LBBMPJKOINK @ RVA 0x317ED48

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LBBMPJKOINK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               int32_t MJBMLNKAPGC,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToNextItems(__this_00,MJBMLNKAPGC,0.2,5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(DFHAHEOKHFA NFIICLCMEHI, Action<DFHAHEOKHFA> DHIFOFDENGG)  [RVA 0x317EEBC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$Init @ RVA 0x317EEBC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               int32_t NFIICLCMEHI,System_Action_DFHAHEOKHFA__o *DHIFOFDENGG,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  System_Action_BaseScrollItem__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  System_Action_DFHAHEOKHFA__o *method_00;
  MethodInfo *method_01;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  undefined8 uVar5;
  
  method_00 = DHIFOFDENGG;
  if ((DAT_045669ac & 1) == 0) {
    FUN_01bab630(&System_Action<BaseScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_HCOKJNGGENJ__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_JLBKGAANIAE__)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_OnScroll__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_10920/*"RaidMisc.arrow_dark_simple"*/);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    FUN_01bab630(&StringLiteral_10919/*"RaidMisc.arrow_active_simple"*/);
    DAT_045669ac = 1;
  }
  (__this->fields).NEFMLODIKPE = NFIICLCMEHI;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GLOCHFIDALL
            (__this,DHIFOFDENGG,(MethodInfo *)method_00);
  pNVar1 = (__this->fields)._scroll;
  uVar5 = NEON_fmov(0x3f800000,4);
  (__this->fields).FDMLNHPDHKJ = (float)(int)uVar5;
  (__this->fields).JKOANJLODNP = (float)(int)((ulong)uVar5 >> 0x20);
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    CJNHFNHJHPE = (System_Action_BaseScrollItem__o *)
                  thunk_FUN_01bda818(System_Action<BaseScrollItem>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__add_OnScroll(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._slideForward;
      if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
        Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                  (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10919/*"RaidMisc.arrow_active_simple"*/,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._slideForward;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
          Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                    (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10920/*"RaidMisc.arrow_dark_simple"*/,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._slideForward;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
            pUVar4 = (UnityEngine_Events_UnityEvent_o *)(pNVar2->fields).super.super.m_OnClick;
            pUVar3 = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar3,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._slideBackward;
              if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                Nekki_SF2_GUI_ResolutionButton__SetPressedSprite
                          (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10919/*"RaidMisc.arrow_active_simple"*/,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._slideBackward;
                if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                  Nekki_SF2_GUI_ResolutionButton__SetDisabledSprite
                            (pNVar2,StringLiteral_14092/*"UI/Atlases/"*/,StringLiteral_10920/*"RaidMisc.arrow_dark_simple"*/,(MethodInfo *)0x0);
                  pNVar2 = (__this->fields)._slideBackward;
                  if (pNVar2 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                    pUVar4 = (UnityEngine_Events_UnityEvent_o *)
                             (pNVar2->fields).super.super.m_OnClick;
                    pUVar3 = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                    UnityEngine_Events_UnityAction___ctor();
                    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                      method_01 = (MethodInfo *)0x0;
                      UnityEngine_Events_UnityEvent__AddListener(pUVar4,pUVar3,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LNAECHIOFNK
                                (__this,true,method_01);
                      return;
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


// ===== public void SetEnabled(bool BLOGOHKEPHI)  [RVA 0x317F0E0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$SetEnabled @ RVA 0x317F0E0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               bool BLOGOHKEPHI,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)__this_00,BLOGOHKEPHI,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GetCurrentItemLogicIndex()  [RVA 0x317F100]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$GetCurrentItemLogicIndex @ RVA 0x317F100

int32_t Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetCurrentItemLogicIndex
                  (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
                  MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  int32_t local_4;
  
  local_4 = -1;
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__GetSelectedItemAndLogicId(__this_00,&local_4,(MethodInfo *)0x0);
    return local_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToItem(int OGPGLGPMEPD)  [RVA 0x317F130]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$ScrollToItem @ RVA 0x317F130

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__ScrollToItem
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               int32_t OGPGLGPMEPD,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  int32_t FIONJFAMAEJ;
  long lVar2;
  
  if ((DAT_045669ad & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    DAT_045669ad = 1;
  }
  pNVar1 = (__this->fields)._scroll;
  (__this->fields).PNIMHIAPIMJ = false;
  if (pNVar1 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0327f1e0;
  if (OGPGLGPMEPD < 1) {
    FIONJFAMAEJ = 1;
LAB_0327f198:
    Nekki_SF2_GUI_SimpleScroll__RollItemsSiblingOrder(pNVar1,FIONJFAMAEJ,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    if (pNVar1 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0327f1e0;
    Nekki_SF2_GUI_SimpleScroll__RebuildLayout(pNVar1,(MethodInfo *)0x0);
  }
  else {
    lVar2 = *(long *)&(pNVar1->fields)._snapEase;
    if (lVar2 == 0) goto LAB_0327f1e0;
    if (*(int *)(lVar2 + 0x18) + -1 <= OGPGLGPMEPD) {
      FIONJFAMAEJ = -1;
      goto LAB_0327f198;
    }
  }
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToItem(pNVar1,OGPGLGPMEPD,0.0,8,(MethodInfo *)0x0);
    (__this->fields).PNIMHIAPIMJ = true;
    return;
  }
LAB_0327f1e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JLBKGAANIAE()  [RVA 0x317F1E4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoAttributeContainer$$JLBKGAANIAE @ RVA 0x317F1E4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__JLBKGAANIAE
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this,
               MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LBBMPJKOINK(__this,1,in_x2);
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__LNAECHIOFNK(__this,false,in_x2);
  EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
  return;
}

