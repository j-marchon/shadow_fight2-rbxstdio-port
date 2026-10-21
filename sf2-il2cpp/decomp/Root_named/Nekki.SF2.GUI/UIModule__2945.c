// TypeDefIndex 2945
// Namespace: Nekki.SF2.GUI
// public class UIModule : MonoBehaviour
// Fields:
//   private int _Order; // 0x20
//   private static Action<UIModule> OnModuleActivated; // 0x0
//   private static Action<UIModule> OnModuleDeactivated; // 0x8
//   private static List<UIModule> _Modules; // 0x10
//   private bool <_IsInited>k__BackingField; // 0x24
//   private bool <_IsReleased>k__BackingField; // 0x25

// ===== public static void add_OnModuleDeactivated(Action<UIModule> CJNHFNHJHPE)  [RVA 0x3490814]
// Nekki.SF2.GUI.UIModule$$add_OnModuleDeactivated @ RVA 0x3490814

void Nekki_SF2_GUI_UIModule__add_OnModuleDeactivated
               (System_Action_UIModule__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_UIModule__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_UIModule__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_UIModule__o *a;
  
  if ((DAT_04568413 & 1) == 0) {
    FUN_01bab630(&System_Action<UIModule>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568413 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  a = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleDeactivated;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<UIModule>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<UIModule>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_UIModule__o *)
             FUN_01c07368(&Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleDeactivated,lVar4
                          ,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== protected bool JBCMHKMCBNN()  [RVA 0x3490908]
// Nekki.SF2.GUI.UIModule$$JBCMHKMCBNN @ RVA 0x3490908

bool Nekki_SF2_GUI_UIModule__JBCMHKMCBNN(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  return (__this->fields).__IsInited_k__BackingField;
}


// ===== protected bool NNOEEOOBFJN()  [RVA 0x3490910]
// Nekki.SF2.GUI.UIModule$$NNOEEOOBFJN @ RVA 0x3490910

bool Nekki_SF2_GUI_UIModule__NNOEEOOBFJN(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  return (__this->fields).__IsReleased_k__BackingField;
}


// ===== public int get_Order()  [RVA 0x3490918]
// Nekki.SF2.GUI.UIModule$$get_Order @ RVA 0x3490918

int32_t Nekki_SF2_GUI_UIModule__get_Order(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  return (__this->fields)._Order;
}


// ===== private void EFPNJDAEIDO(bool CJNHFNHJHPE)  [RVA 0x3490920]
// Nekki.SF2.GUI.UIModule$$EFPNJDAEIDO @ RVA 0x3490920

void Nekki_SF2_GUI_UIModule__EFPNJDAEIDO
               (Nekki_SF2_GUI_UIModule_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).__IsReleased_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static void remove_OnModuleActivated(Action<UIModule> CJNHFNHJHPE)  [RVA 0x349092C]
// Nekki.SF2.GUI.UIModule$$remove_OnModuleActivated @ RVA 0x349092C

void Nekki_SF2_GUI_UIModule__remove_OnModuleActivated
               (System_Action_UIModule__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_UIModule__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_UIModule__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_UIModule__o *source;
  
  if ((DAT_04568414 & 1) == 0) {
    FUN_01bab630(&System_Action<UIModule>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568414 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  source = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleActivated;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<UIModule>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<UIModule>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = (System_Action_UIModule__o *)
             FUN_01c07368(Nekki_SF2_GUI_UIModule_TypeInfo->static_fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void Activate()  [RVA 0x3490A1C]
// Nekki.SF2.GUI.UIModule$$Activate @ RVA 0x3490A1C

void Nekki_SF2_GUI_UIModule__Activate(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_UIModule_c *pNVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568415 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568415 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Transform_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,
                           Method_UnityEngine_Component_GetComponent<RectTransform>__);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UnityEngine_Transform__SetSiblingIndex(__this_01,(__this->fields)._Order,(MethodInfo *)0x0);
      if ((__this->fields).__IsInited_k__BackingField == false) {
        pNVar5 = __this->klass;
        (__this->fields).__IsInited_k__BackingField = true;
        (*(pNVar5->vtable)._5_GIENGNEGHPJ.methodPtr)(__this,(pNVar5->vtable)._5_GIENGNEGHPJ.method);
      }
      (*(__this->klass->vtable)._7_BJBEBBGINAH.methodPtr)
                (__this,(__this->klass->vtable)._7_BJBEBBGINAH.method);
      pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo);
      }
      pSVar3 = Nekki_SF2_GUI_UIModule__HIJDMNMPFIM
                         (__this,Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleActivated,
                          method_00);
      if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
        pPVar6 = pPVar2->klass;
        uVar1._0_1_ = (pPVar6->_2).rank;
        uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar1;
        if (uVar7 != 0) {
          piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar4 = pPVar6->vtable + *piVar8;
              goto LAB_03590b68;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_03590b68:
                    /* WARNING: Could not recover jumptable at 0x03590b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x3490C10]
// Nekki.SF2.GUI.UIModule$$Awake @ RVA 0x3490C10

void Nekki_SF2_GUI_UIModule__Awake(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_UIModule__o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_UIModule_array *pNVar3;
  
  if ((DAT_04568416 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Add__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568416 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  lVar2 = Method_System_Collections_Generic_List<UIModule>_Add__;
  __this_00 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
  if (__this_00 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    pNVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pNVar3 != (Nekki_SF2_GUI_UIModule_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pNVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pNVar3->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsActive()  [RVA 0x3490CE4]
// Nekki.SF2.GUI.UIModule$$get_IsActive @ RVA 0x3490CE4

bool Nekki_SF2_GUI_UIModule__get_IsActive(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void JHJCCHBOMHP()  [RVA 0x3490D04]
// Nekki.SF2.GUI.UIModule$$JHJCCHBOMHP @ RVA 0x3490D04

void Nekki_SF2_GUI_UIModule__JHJCCHBOMHP(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected virtual void GIENGNEGHPJ()  [RVA 0x3490D08]
// Nekki.SF2.GUI.UIModule$$GIENGNEGHPJ @ RVA 0x3490D08

void Nekki_SF2_GUI_UIModule__GIENGNEGHPJ(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected virtual void CLNAOMIIBLH()  [RVA 0x3490D0C]
// Nekki.SF2.GUI.UIModule$$CLNAOMIIBLH @ RVA 0x3490D0C

void Nekki_SF2_GUI_UIModule__CLNAOMIIBLH(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  return;
}


// ===== public static UIModule MountModule(UIModule BBFEPHOMGDM, Transform JJHEGPBBMLG, bool GKGCMGDFHAH)  [RVA 0x3490D10]
// Nekki.SF2.GUI.UIModule$$MountModule @ RVA 0x3490D10

Nekki_SF2_GUI_UIModule_o *
Nekki_SF2_GUI_UIModule__MountModule
          (Nekki_SF2_GUI_UIModule_o *BBFEPHOMGDM,UnityEngine_Transform_o *JJHEGPBBMLG,
          bool GKGCMGDFHAH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *original;
  UnityEngine_Object_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *value;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_UIModule_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04568417 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<UIModule>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568417 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)BBFEPHOMGDM,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    return (Nekki_SF2_GUI_UIModule_o *)0x0;
  }
  if (BBFEPHOMGDM != (Nekki_SF2_GUI_UIModule_o *)0x0) {
    original = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)BBFEPHOMGDM,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this = (UnityEngine_Object_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)original,Method_UnityEngine_Object_Instantiate<GameObject>__
                       );
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)BBFEPHOMGDM,(MethodInfo *)0x0);
    if ((__this_00 != (UnityEngine_Object_o *)0x0) &&
       (value = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0),
       __this != (UnityEngine_Object_o *)0x0)) {
      UnityEngine_Object__set_name(__this,value,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar2,JJHEGPBBMLG,false,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
        if (DAT_0455fa7f == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fa7f = '\x01';
        }
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localScale
                    (pUVar2,(UnityEngine_Vector3_o)
                            (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,
                     (MethodInfo *)0x0);
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)__this,false,(MethodInfo *)0x0);
          __this_01 = (Nekki_SF2_GUI_UIModule_o *)
                      UnityEngine_GameObject__GetComponent<object>
                                ((UnityEngine_GameObject_o *)__this,
                                 Method_UnityEngine_GameObject_GetComponent<UIModule>__);
          if (GKGCMGDFHAH) {
            if (__this_01 == (Nekki_SF2_GUI_UIModule_o *)0x0) goto LAB_03590ec0;
            Nekki_SF2_GUI_UIModule__Activate(__this_01,method_00);
          }
          return __this_01;
        }
      }
    }
  }
LAB_03590ec0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void remove_OnModuleDeactivated(Action<UIModule> CJNHFNHJHPE)  [RVA 0x3490EC4]
// Nekki.SF2.GUI.UIModule$$remove_OnModuleDeactivated @ RVA 0x3490EC4

/* WARNING: Control flow encountered bad instruction data */

void Nekki_SF2_GUI_UIModule__remove_OnModuleDeactivated
               (System_Action_UIModule__o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568418 & 1) == 0) {
    FUN_01bab630(&System_Action<UIModule>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568418 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  System_Delegate__Remove
            ((System_Delegate_o *)
             Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleDeactivated,
             (System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== public bool get_IsDestroyed()  [RVA 0x3490FB8]
// Nekki.SF2.GUI.UIModule$$get_IsDestroyed @ RVA 0x3490FB8

bool Nekki_SF2_GUI_UIModule__get_IsDestroyed(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  return (__this->fields).__IsReleased_k__BackingField;
}


// ===== public void DeActivate()  [RVA 0x3490FC0]
// Nekki.SF2.GUI.UIModule$$DeActivate @ RVA 0x3490FC0

void Nekki_SF2_GUI_UIModule__DeActivate(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_GameObject_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04568419 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568419 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._4_JHJCCHBOMHP.methodPtr)
              (__this,(__this->klass->vtable)._4_JHJCCHBOMHP.method);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo);
    }
    pSVar3 = Nekki_SF2_GUI_UIModule__HIJDMNMPFIM
                       (__this,Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleDeactivated,
                        method_00);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_035910bc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_035910bc:
                    /* WARNING: Could not recover jumptable at 0x035910d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MoveToSceneCanvas()  [RVA 0x34910DC]
// Nekki.SF2.GUI.UIModule$$MoveToSceneCanvas @ RVA 0x34910DC

void Nekki_SF2_GUI_UIModule__MoveToSceneCanvas(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_ModuleHolder_o *__this_01;
  UnityEngine_RectTransform_o *parent;
  MethodInfo *method_00;
  
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (DAT_04567f86 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_04567f86 = '\x01';
  }
  __this_01 = Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ;
                    /* try { // try from 0359112c to 0369126b has its CatchHandler @ 0359112c
                       catch() { ... } // from try @ 0359112c with catch @ 0359112c
                       catch() { ... } // from try @ 035912e8 with catch @ 0359112c
                       catch() { ... } // from try @ 03591310 with catch @ 0359112c
                       catch() { ... } // from try @ 03591348 with catch @ 0359112c
                       catch() { ... } // from try @ 03591378 with catch @ 0359112c
                       catch() { ... } // from try @ 035913b8 with catch @ 0359112c
                       catch() { ... } // from try @ 035913e8 with catch @ 0359112c */
  if ((__this_01 != (Nekki_SF2_GUI_ModuleHolder_o *)0x0) &&
     (parent = Nekki_SF2_GUI_ModuleHolder__get_RectTransform(__this_01,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent
              (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
    Nekki_SF2_GUI_UIModule__Activate(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3491160]
// Nekki.SF2.GUI.UIModule$$.ctor @ RVA 0x3491160

void Nekki_SF2_GUI_UIModule___ctor(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private IEnumerator HIJDMNMPFIM(Action<UIModule> AAJGEHHPMGH)  [RVA 0x3490B88]
// Nekki.SF2.GUI.UIModule$$HIJDMNMPFIM @ RVA 0x3490B88

/* WARNING: Control flow encountered unimplemented instructions */

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_UIModule__HIJDMNMPFIM
          (Nekki_SF2_GUI_UIModule_o *__this,System_Action_UIModule__o *AAJGEHHPMGH,
          MethodInfo *method)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ===== protected virtual void BJBEBBGINAH()  [RVA 0x3491190]
// Nekki.SF2.GUI.UIModule$$BJBEBBGINAH @ RVA 0x3491190

void Nekki_SF2_GUI_UIModule__BJBEBBGINAH(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  return;
}


// ===== public RectTransform get_RectTransform()  [RVA 0x3491194]
// Nekki.SF2.GUI.UIModule$$get_RectTransform @ RVA 0x3491194

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_UIModule__get_RectTransform(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_0456841b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    DAT_0456841b = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<RectTransform>__);
  return pUVar1;
}


// ===== private void FDDGMBIPHON(bool CJNHFNHJHPE)  [RVA 0x34911DC]
// Nekki.SF2.GUI.UIModule$$FDDGMBIPHON @ RVA 0x34911DC

void Nekki_SF2_GUI_UIModule__FDDGMBIPHON
               (Nekki_SF2_GUI_UIModule_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).__IsInited_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public static void add_OnModuleActivated(Action<UIModule> CJNHFNHJHPE)  [RVA 0x34911E8]
// Nekki.SF2.GUI.UIModule$$add_OnModuleActivated @ RVA 0x34911E8

void Nekki_SF2_GUI_UIModule__add_OnModuleActivated
               (System_Action_UIModule__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_UIModule__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_UIModule__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Action_UIModule__o *a;
  
  if ((DAT_0456841c & 1) == 0) {
    FUN_01bab630(&System_Action<UIModule>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_0456841c = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  a = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleActivated;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<UIModule>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 0359126c to 03691273 has its CatchHandler @ 0359139c */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<UIModule>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 03591288 to 0369128f has its CatchHandler @ 03591394 */
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0359129c to 036912a7 has its CatchHandler @ 03591384 */
    pSVar5 = (System_Action_UIModule__o *)
             FUN_01c07368(Nekki_SF2_GUI_UIModule_TypeInfo->static_fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 035912c0 to 036912c7 has its CatchHandler @ 035912f0 */
  return;
}


// ===== private void OnDestroy()  [RVA 0x34912D8]
// Nekki.SF2.GUI.UIModule$$OnDestroy @ RVA 0x34912D8

void Nekki_SF2_GUI_UIModule__OnDestroy(Nekki_SF2_GUI_UIModule_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_UIModule__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Nekki_SF2_GUI_UIModule_c *pNVar1;
  
                    /* try { // try from 035912e0 to 036912e7 has its CatchHandler @ 03591390 */
                    /* try { // try from 035912e8 to 0369130b has its CatchHandler @ 0359112c */
  if ((DAT_0456841d & 1) == 0) {
                    /* catch() { ... } // from try @ 035912c0 with catch @ 035912f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Remove__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
                    /* try { // try from 0359130c to 0369130f has its CatchHandler @ 03591378 */
    DAT_0456841d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03591310 to 03691343 has its CatchHandler @ 0359112c */
  if ((__this->fields).__IsReleased_k__BackingField == false) {
    pNVar1 = __this->klass;
    (__this->fields).__IsReleased_k__BackingField = true;
    (*(pNVar1->vtable)._6_CLNAOMIIBLH.methodPtr)(__this,(pNVar1->vtable)._6_CLNAOMIIBLH.method);
    method = extraout_x1_00;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03591344 to 03691347 has its CatchHandler @ 03591398 */
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
                    /* try { // try from 03591348 to 0369134b has its CatchHandler @ 0359112c */
  }
                    /* try { // try from 0359134c to 03691353 has its CatchHandler @ 0359138c */
  __this_00 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
                    /* try { // try from 03591354 to 03691357 has its CatchHandler @ 03591388 */
  if (__this_00 != (System_Collections_Generic_List_UIModule__o *)0x0) {
                    /* try { // try from 03591360 to 03691377 has its CatchHandler @ 035913fc */
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
               Method_System_Collections_Generic_List<UIModule>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static UIModule GetModuleByName(string AFKICLAFDKC)  [RVA 0x3491378]
// Nekki.SF2.GUI.UIModule$$GetModuleByName @ RVA 0x3491378

Nekki_SF2_GUI_UIModule_o *
Nekki_SF2_GUI_UIModule__GetModuleByName(System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  Nekki_SF2_GUI_UIModule_o *pNVar2;
  System_Collections_Generic_List_UIModule__o *pSVar3;
  int index;
  
                    /* catch() { ... } // from try @ 0359130c with catch @ 03591378
                       try { // try from 03591378 to 036913b3 has its CatchHandler @ 0359112c */
                    /* catch() { ... } // from try @ 0359129c with catch @ 03591384 */
                    /* catch() { ... } // from try @ 03591354 with catch @ 03591388 */
                    /* catch() { ... } // from try @ 0359134c with catch @ 0359138c */
                    /* catch() { ... } // from try @ 035912e0 with catch @ 03591390 */
  if ((DAT_0456841e & 1) == 0) {
                    /* catch() { ... } // from try @ 03591288 with catch @ 03591394 */
                    /* catch() { ... } // from try @ 03591344 with catch @ 03591398 */
                    /* catch() { ... } // from try @ 0359126c with catch @ 0359139c */
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_get_Item__);
                    /* try { // try from 035913b4 to 036913b7 has its CatchHandler @ 035913d8 */
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
                    /* try { // try from 035913b8 to 036913df has its CatchHandler @ 0359112c */
    DAT_0456841e = 1;
  }
  index = 0;
  while( true ) {
                    /* catch() { ... } // from try @ 035913b4 with catch @ 035913d8 */
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035913e0 to 036913e7 has its CatchHandler @ 035913fc */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035913e8 to 036913f3 has its CatchHandler @ 0359112c */
    pSVar3 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
    if (pSVar3 == (System_Collections_Generic_List_UIModule__o *)0x0) goto LAB_0359149c;
                    /* try { // try from 035913f4 to 036913fb has its CatchHandler @ 035913fc */
                    /* catch() { ... } // from try @ 03591360 with catch @ 035913fc
                       catch() { ... } // from try @ 035913e0 with catch @ 035913fc
                       catch() { ... } // from try @ 035913f4 with catch @ 035913fc */
    if ((pSVar3->fields)._size <= index) {
      return (Nekki_SF2_GUI_UIModule_o *)0x0;
    }
                    /* try { // try from 03591400 to 03691533 has its CatchHandler @ 03591400
                       catch() { ... } // from try @ 03591400 with catch @ 03591400
                       catch() { ... } // from try @ 035915a4 with catch @ 03591400
                       catch() { ... } // from try @ 035915c4 with catch @ 03591400
                       catch() { ... } // from try @ 03591624 with catch @ 03591400
                       catch() { ... } // from try @ 03591658 with catch @ 03591400
                       catch() { ... } // from try @ 0359168c with catch @ 03591400 */
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pSVar3 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
      if (pSVar3 == (System_Collections_Generic_List_UIModule__o *)0x0) goto LAB_0359149c;
    }
    __this = (UnityEngine_Object_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar3,index,
                        Method_System_Collections_Generic_List<UIModule>_get_Item__);
    if (__this == (UnityEngine_Object_o *)0x0) goto LAB_0359149c;
    a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,AFKICLAFDKC,(MethodInfo *)0x0);
    if (bVar1) break;
    index = index + 1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
  if (pSVar3 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    pNVar2 = (Nekki_SF2_GUI_UIModule_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar3,index,
                        Method_System_Collections_Generic_List<UIModule>_get_Item__);
    return pNVar2;
  }
LAB_0359149c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x34914A0]
// Nekki.SF2.GUI.UIModule$$.cctor @ RVA 0x34914A0

/* WARNING: Control flow encountered unimplemented instructions */

void Nekki_SF2_GUI_UIModule___cctor(MethodInfo *method)

{
  System_Action_UIModule__o *pSVar1;
  System_Action_UIModule__o **ppSVar2;
  System_Collections_Generic_List_UIModule__o *__this;
  System_Collections_Generic_List_UIModule__o **ppSVar3;
  
  if ((DAT_0456841f & 1) == 0) {
    FUN_01bab630(&System_Action<UIModule>_TypeInfo);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
                    /* try { // try from 03591534 to 0369153b has its CatchHandler @ 03591644 */
                    /* try { // try from 03591550 to 03691557 has its CatchHandler @ 0359163c */
  if ((Nekki_SF2_GUI_UIModule_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03591570 to 03691577 has its CatchHandler @ 035915b0 */
  pSVar1 = (System_Action_UIModule__o *)thunk_FUN_01bda818(System_Action<UIModule>_TypeInfo);
                    /* try { // try from 03591584 to 0369158f has its CatchHandler @ 035915ac */
  System_Action<object>___ctor();
  Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleActivated = pSVar1;
                    /* try { // try from 0359159c to 036915a3 has its CatchHandler @ 03591640 */
                    /* try { // try from 035915a4 to 036915bf has its CatchHandler @ 03591400 */
  thunk_FUN_01c20e04(Nekki_SF2_GUI_UIModule_TypeInfo->static_fields,pSVar1);
                    /* catch() { ... } // from try @ 03591584 with catch @ 035915ac */
                    /* catch() { ... } // from try @ 03591570 with catch @ 035915b0 */
  pSVar1 = (System_Action_UIModule__o *)thunk_FUN_01bda818(System_Action<UIModule>_TypeInfo);
                    /* try { // try from 035915c0 to 036915c3 has its CatchHandler @ 03591628 */
                    /* try { // try from 035915c4 to 036915fb has its CatchHandler @ 03591400 */
  System_Action<object>___ctor();
  ppSVar2 = &Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->OnModuleDeactivated;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this = (System_Collections_Generic_List_UIModule__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<UIModule>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<UIModule>__ctor__);
                    /* try { // try from 035915fc to 03691617 has its CatchHandler @ 035916a0 */
  ppSVar3 = &Nekki_SF2_GUI_UIModule_TypeInfo->static_fields->_Modules;
  *ppSVar3 = __this;
                    /* try { // try from 03591618 to 0369161b has its CatchHandler @ 03591638 */
                    /* try { // try from 0359161c to 03691623 has its CatchHandler @ 03591634 */
  thunk_FUN_01c20e04(ppSVar3,__this);
  return;
}

