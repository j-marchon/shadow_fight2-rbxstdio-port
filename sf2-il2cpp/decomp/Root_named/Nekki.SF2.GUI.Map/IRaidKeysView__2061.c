// TypeDefIndex 2061
// Namespace: Nekki.SF2.GUI.Map
// public abstract class IRaidKeysView : MonoBehaviour
// Fields:
//   protected List<NPKKNCCEIND> ADHBPAAHOKK; // 0x20
//   protected bool DFGLKIENEIH; // 0x28

// ===== protected static void GNMFDGIDOKJ(GameObject ELOCKFLGKNO)  [RVA 0x32B7AFC]
// Nekki.SF2.GUI.Map.IRaidKeysView$$GNMFDGIDOKJ @ RVA 0x32B7AFC

void Nekki_SF2_GUI_Map_IRaidKeysView__GNMFDGIDOKJ
               (UnityEngine_GameObject_o *ELOCKFLGKNO,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  int index;
  
  if ((ELOCKFLGKNO != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    index = 0;
    do {
      iVar1 = UnityEngine_Transform__get_childCount(pUVar2,(MethodInfo *)0x0);
      if (iVar1 <= index) {
        return;
      }
      pUVar2 = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0);
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar2 = UnityEngine_Transform__GetChild(pUVar2,index,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) break;
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      index = index + 1;
      pUVar2 = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0);
    } while (pUVar2 != (UnityEngine_Transform_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected RaidKey ANMOLCFIIJK(NPKKNCCEIND BGDNOAFNJGG, GameObject ELOCKFLGKNO)  [RVA 0x32B7B84]
// Nekki.SF2.GUI.Map.IRaidKeysView$$ANMOLCFIIJK @ RVA 0x32B7B84

Nekki_SF2_GUI_Map_RaidKey_o *
Nekki_SF2_GUI_Map_IRaidKeysView__ANMOLCFIIJK
          (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,NPKKNCCEIND_o *BGDNOAFNJGG,
          UnityEngine_GameObject_o *ELOCKFLGKNO,MethodInfo *method)

{
  UnityEngine_Transform_o *ODNJEHJPBGA;
  Nekki_SF2_GUI_Map_RaidKey_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04567463 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_IRaidKeysView_OCLHAMMOPEK__);
    DAT_04567463 = 1;
  }
  if (ELOCKFLGKNO != (UnityEngine_GameObject_o *)0x0) {
    ODNJEHJPBGA = UnityEngine_GameObject__get_transform(ELOCKFLGKNO,(MethodInfo *)0x0);
    __this_00 = Nekki_SF2_GUI_Map_RaidKey__CreateIconAndCountLabel
                          (ODNJEHJPBGA,BGDNOAFNJGG,(MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_00 != (Nekki_SF2_GUI_Map_RaidKey_o *)0x0) {
      Nekki_SF2_GUI_Map_RaidKey__add_OnRebuilt(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void .ctor()  [RVA 0x32B7C44]
// Nekki.SF2.GUI.Map.IRaidKeysView$$.ctor @ RVA 0x32B7C44

void Nekki_SF2_GUI_Map_IRaidKeysView___ctor
               (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_NPKKNCCEIND__o *__this_00;
  System_Collections_Generic_List_NPKKNCCEIND__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567464 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NPKKNCCEIND>_TypeInfo);
    DAT_04567464 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_NPKKNCCEIND__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NPKKNCCEIND>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NPKKNCCEIND>__ctor__);
  ppSVar1 = &(__this->fields).ADHBPAAHOKK;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OCLHAMMOPEK()  [RVA 0x32B7CCC]
// Nekki.SF2.GUI.Map.IRaidKeysView$$OCLHAMMOPEK @ RVA 0x32B7CCC

void Nekki_SF2_GUI_Map_IRaidKeysView__OCLHAMMOPEK
               (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,MethodInfo *method)

{
  (__this->fields).DFGLKIENEIH = true;
  return;
}


// ===== public virtual void Init()  [RVA 0x32B7CD8]
// Nekki.SF2.GUI.Map.IRaidKeysView$$Init @ RVA 0x32B7CD8

void Nekki_SF2_GUI_Map_IRaidKeysView__Init
               (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void RemoveAllKeys()  [RVA 0x32B7CDC]
// Nekki.SF2.GUI.Map.IRaidKeysView$$RemoveAllKeys @ RVA 0x32B7CDC

void Nekki_SF2_GUI_Map_IRaidKeysView__RemoveAllKeys
               (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_NPKKNCCEIND__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567465 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<NPKKNCCEIND>_Clear__);
    DAT_04567465 = 1;
  }
  pSVar1 = (__this->fields).ADHBPAAHOKK;
  if (pSVar1 != (System_Collections_Generic_List_NPKKNCCEIND__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
                    /* WARNING: Could not recover jumptable at 0x033b7d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._4_unknown.methodPtr)
              (__this,(__this->klass->vtable)._4_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== protected static void AMOJAGCNKAB(GameObject CMMIJCJOBBF)  [RVA 0x32B7D50]
// Nekki.SF2.GUI.Map.IRaidKeysView$$AMOJAGCNKAB @ RVA 0x32B7D50

void Nekki_SF2_GUI_Map_IRaidKeysView__AMOJAGCNKAB
               (UnityEngine_GameObject_o *CMMIJCJOBBF,MethodInfo *method)

{
  UnityEngine_RectTransform_o *layoutRoot;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = CMMIJCJOBBF;
  if ((DAT_04567466 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_LayoutRebuilder_TypeInfo);
    auVar1 = FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567466 = 1;
  }
  if (CMMIJCJOBBF == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
  }
  UnityEngine_GameObject__SetActive(CMMIJCJOBBF,false,(MethodInfo *)0x0);
  UnityEngine_GameObject__SetActive(CMMIJCJOBBF,true,(MethodInfo *)0x0);
  layoutRoot = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0);
  if ((UnityEngine_UI_LayoutRebuilder_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_UI_LayoutRebuilder_TypeInfo);
  }
  if (layoutRoot == (UnityEngine_RectTransform_o *)0x0) {
    layoutRoot = (UnityEngine_RectTransform_o *)0x0;
  }
  else if (layoutRoot->klass != UnityEngine_RectTransform_TypeInfo) {
    layoutRoot = (UnityEngine_RectTransform_o *)0x0;
  }
  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
  return;
}


// ===== public void UpdateKeys(List<NPKKNCCEIND> IFFLAAMFALK)  [RVA 0x32B7E14]
// Nekki.SF2.GUI.Map.IRaidKeysView$$UpdateKeys @ RVA 0x32B7E14

void Nekki_SF2_GUI_Map_IRaidKeysView__UpdateKeys
               (Nekki_SF2_GUI_Map_IRaidKeysView_o *__this,
               System_Collections_Generic_List_NPKKNCCEIND__o *IFFLAAMFALK,MethodInfo *method)

{
  System_Collections_Generic_List_NPKKNCCEIND__o **ppSVar1;
  
  Nekki_SF2_GUI_Map_IRaidKeysView__RemoveAllKeys(__this,(MethodInfo *)IFFLAAMFALK);
  ppSVar1 = &(__this->fields).ADHBPAAHOKK;
  *ppSVar1 = IFFLAAMFALK;
  thunk_FUN_01c20e04(ppSVar1,IFFLAAMFALK);
  (*(__this->klass->vtable)._8_unknown.methodPtr)(__this,(__this->klass->vtable)._8_unknown.method);
                    /* WARNING: Could not recover jumptable at 0x033b7e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_unknown.methodPtr)(__this,(__this->klass->vtable)._5_unknown.method);
  return;
}

