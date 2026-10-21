// TypeDefIndex 901
// Namespace: Sf2
// public sealed class Timers : MonoBehaviour
// Fields:
//   private static Timers CBDMFFMCJBK; // 0x0
//   private readonly List<HDNONCJLIHI> DIKHJEINHID; // 0x20

// ===== private void Update()  [RVA 0x3096934]
// Sf2.Timers$$Update @ RVA 0x3096934

void Sf2_Timers__Update(Sf2_Timers_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  int index;
  float fVar9;
  undefined4 extraout_var;
  
  if ((DAT_045660dd & 1) == 0) {
    FUN_01bab630(&HDNONCJLIHI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>_get_Item__);
    DAT_045660dd = 1;
  }
  pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).DIKHJEINHID;
  if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
    index = (pSVar3->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         (pSVar3,index,
                          Method_System_Collections_Generic_List<HDNONCJLIHI>_get_Item__);
      if (pIVar4 == (Il2CppObject *)0x0) break;
      pIVar6 = pIVar4->klass;
      uVar1._0_1_ = (pIVar6->_2).rank;
      uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)HDNONCJLIHI_TypeInfo) {
            pVVar5 = pIVar6->vtable + (*piVar8 + 1);
            goto LAB_03196a20;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,HDNONCJLIHI_TypeInfo,1);
LAB_03196a20:
      uVar7 = (*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).DIKHJEINHID;
      if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) break;
      if ((uVar7 & 1) == 0) {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           (pSVar3,index,
                            Method_System_Collections_Generic_List<HDNONCJLIHI>_get_Item__);
        fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        if (pIVar4 == (Il2CppObject *)0x0) break;
        pIVar6 = pIVar4->klass;
        uVar2._0_1_ = (pIVar6->_2).rank;
        uVar2._1_1_ = (pIVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar2;
        if (uVar7 != 0) {
          piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)HDNONCJLIHI_TypeInfo) {
              pVVar5 = pIVar6->vtable + *piVar8;
              goto LAB_03196abc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,HDNONCJLIHI_TypeInfo,0);
LAB_03196abc:
        (*pVVar5->methodPtr)(CONCAT44(extraout_var,fVar9),pIVar4,pVVar5->method);
      }
      else {
        System_Collections_Generic_List<object>__RemoveAt
                  (pSVar3,index,Method_System_Collections_Generic_List<HDNONCJLIHI>_RemoveAt__);
      }
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).DIKHJEINHID;
    } while (pSVar3 != (System_Collections_Generic_List_object__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static IDisposable FrameDelay(Action CPECAEHDDDB, int HLFBBLPFKEO = 0)  [RVA 0x3096AF8]
// Sf2.Timers$$FrameDelay @ RVA 0x3096AF8

System_IDisposable_o *
Sf2_Timers__FrameDelay(System_Action_o *CPECAEHDDDB,int32_t HLFBBLPFKEO,MethodInfo *method)

{
  System_Action_o *method_00;
  Sf2_Timers_o *__this;
  OOGBHOMNILJ_o *__this_00;
  System_IDisposable_o *pSVar1;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)(uint)HLFBBLPFKEO;
  method_00 = CPECAEHDDDB;
  if ((DAT_045660de & 1) == 0) {
    method_00 = (System_Action_o *)FUN_01bab630(&OOGBHOMNILJ_TypeInfo);
    DAT_045660de = 1;
  }
  __this = Sf2_Timers__AIHNLLGNBLC((MethodInfo *)method_00);
  __this_00 = (OOGBHOMNILJ_o *)thunk_FUN_01bda818(OOGBHOMNILJ_TypeInfo);
  OOGBHOMNILJ___ctor(__this_00,CPECAEHDDDB,HLFBBLPFKEO,(MethodInfo *)0x0);
  if (__this != (Sf2_Timers_o *)0x0) {
    pSVar1 = Sf2_Timers__NKLGCNHLBAF(__this,(HPPHKOJNEPB_o *)__this_00,method_01);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3096D2C]
// Sf2.Timers$$.ctor @ RVA 0x3096D2C

void Sf2_Timers___ctor(Sf2_Timers_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_HDNONCJLIHI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045660df & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HDNONCJLIHI>_TypeInfo);
    DAT_045660df = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HDNONCJLIHI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<HDNONCJLIHI>__ctor__);
  ppSVar1 = &(__this->fields).DIKHJEINHID;
  *ppSVar1 = (System_Collections_Generic_List_HDNONCJLIHI__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static IDisposable TimeDelay(Action CPECAEHDDDB, float KDNLAOJBFMH)  [RVA 0x3096DB4]
// Sf2.Timers$$TimeDelay @ RVA 0x3096DB4

System_IDisposable_o *
Sf2_Timers__TimeDelay(System_Action_o *CPECAEHDDDB,float KDNLAOJBFMH,MethodInfo *method)

{
  System_Action_o *method_00;
  Sf2_Timers_o *__this;
  NKLLKOKEMOJ_o *__this_00;
  System_IDisposable_o *pSVar1;
  MethodInfo *method_01;
  
  method_00 = CPECAEHDDDB;
  if ((DAT_045660e0 & 1) == 0) {
    method_00 = (System_Action_o *)FUN_01bab630(&NKLLKOKEMOJ_TypeInfo);
    DAT_045660e0 = 1;
  }
  __this = Sf2_Timers__AIHNLLGNBLC((MethodInfo *)method_00);
  __this_00 = (NKLLKOKEMOJ_o *)thunk_FUN_01bda818(NKLLKOKEMOJ_TypeInfo);
  method_01 = (MethodInfo *)0x0;
  NKLLKOKEMOJ___ctor(__this_00,CPECAEHDDDB,KDNLAOJBFMH,(MethodInfo *)0x0);
  if (__this != (Sf2_Timers_o *)0x0) {
    pSVar1 = Sf2_Timers__NKLGCNHLBAF(__this,(HPPHKOJNEPB_o *)__this_00,method_01);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IDisposable NKLGCNHLBAF(HPPHKOJNEPB KILAOGMHCEO)  [RVA 0x3096CC8]
// Sf2.Timers$$NKLGCNHLBAF @ RVA 0x3096CC8

System_IDisposable_o *
Sf2_Timers__NKLGCNHLBAF(Sf2_Timers_o *__this,HPPHKOJNEPB_o *KILAOGMHCEO,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_045660e1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HDNONCJLIHI>_Insert__);
    DAT_045660e1 = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).DIKHJEINHID;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Insert
              (__this_00,0,(Il2CppObject *)KILAOGMHCEO,
               Method_System_Collections_Generic_List<HDNONCJLIHI>_Insert__);
    return (System_IDisposable_o *)KILAOGMHCEO;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static IDisposable ConditionDelay(Action CPECAEHDDDB, Func<bool> OIIPBHPGODN)  [RVA 0x3096E38]
// Sf2.Timers$$ConditionDelay @ RVA 0x3096E38

System_IDisposable_o *
Sf2_Timers__ConditionDelay
          (System_Action_o *CPECAEHDDDB,System_Func_bool__o *OIIPBHPGODN,MethodInfo *method)

{
  System_Action_o *method_00;
  Sf2_Timers_o *__this;
  GIMHCFFEEJN_o *__this_00;
  System_IDisposable_o *pSVar1;
  
  method_00 = CPECAEHDDDB;
  if ((DAT_045660e2 & 1) == 0) {
    method_00 = (System_Action_o *)FUN_01bab630(&GIMHCFFEEJN_TypeInfo);
    DAT_045660e2 = 1;
  }
  __this = Sf2_Timers__AIHNLLGNBLC((MethodInfo *)method_00);
  __this_00 = (GIMHCFFEEJN_o *)thunk_FUN_01bda818(GIMHCFFEEJN_TypeInfo);
  GIMHCFFEEJN___ctor(__this_00,CPECAEHDDDB,OIIPBHPGODN,(MethodInfo *)0x0);
  if (__this != (Sf2_Timers_o *)0x0) {
    pSVar1 = Sf2_Timers__NKLGCNHLBAF(__this,(HPPHKOJNEPB_o *)__this_00,(MethodInfo *)OIIPBHPGODN);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static Timers AIHNLLGNBLC()  [RVA 0x3096B7C]
// Sf2.Timers$$AIHNLLGNBLC @ RVA 0x3096B7C

Sf2_Timers_o * Sf2_Timers__AIHNLLGNBLC(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Object_o *target;
  Sf2_Timers_o *pSVar2;
  
  if ((DAT_045660e3 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<Timers>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Sf2_Timers_TypeInfo);
    FUN_01bab630(&StringLiteral_15599/*"[Timers]"*/);
    DAT_045660e3 = 1;
  }
  pSVar2 = Sf2_Timers_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this,StringLiteral_15599/*"[Timers]"*/,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pSVar2 = (Sf2_Timers_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (__this,Method_UnityEngine_GameObject_AddComponent<Timers>__);
      Sf2_Timers_TypeInfo->static_fields->CBDMFFMCJBK = pSVar2;
      thunk_FUN_01c20e04(Sf2_Timers_TypeInfo->static_fields,pSVar2);
      pSVar2 = Sf2_Timers_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pSVar2 != (Sf2_Timers_o *)0x0) {
        target = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pSVar2,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
        goto LAB_03196cac;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_03196cac:
  return Sf2_Timers_TypeInfo->static_fields->CBDMFFMCJBK;
}

