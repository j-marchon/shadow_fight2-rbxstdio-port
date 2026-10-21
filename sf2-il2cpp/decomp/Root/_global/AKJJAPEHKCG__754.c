// TypeDefIndex 754
// Namespace: 
// [Extension]
// public static class AKJJAPEHKCG
// Fields:

// ===== public static void HJDDBKPCAFJ(Selectable PFNMDNHEFEC)  [RVA 0x304E898]
// AKJJAPEHKCG$$HJDDBKPCAFJ @ RVA 0x304E898

void AKJJAPEHKCG__HJDDBKPCAFJ(UnityEngine_UI_Selectable_o *PFNMDNHEFEC,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  
  if (PFNMDNHEFEC != (UnityEngine_UI_Selectable_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)PFNMDNHEFEC,(MethodInfo *)0x0);
    AKJJAPEHKCG__HJDDBKPCAFJ(LAIGNDBNBJG,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool KCMMEMJNMLI(Graphic DAHDMONMPFJ)  [RVA 0x304EA18]
// AKJJAPEHKCG$$KCMMEMJNMLI @ RVA 0x304EA18

bool AKJJAPEHKCG__KCMMEMJNMLI(UnityEngine_UI_Graphic_o *DAHDMONMPFJ,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  
  if (DAHDMONMPFJ != (UnityEngine_UI_Graphic_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)DAHDMONMPFJ,(MethodInfo *)0x0);
    bVar1 = AKJJAPEHKCG__KCMMEMJNMLI(LAIGNDBNBJG,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool MNKFDLHJPAA(GameObject LAIGNDBNBJG)  [RVA 0x304EAE0]
// AKJJAPEHKCG$$MNKFDLHJPAA @ RVA 0x304EAE0

bool AKJJAPEHKCG__MNKFDLHJPAA(UnityEngine_GameObject_o *LAIGNDBNBJG,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar2;
  MethodInfo *method_00;
  
  pNVar2 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    bVar1 = false;
    if ((pNVar2->fields).DBNNMLAONOF != false) {
      bVar1 = AKJJAPEHKCG__KCMMEMJNMLI(LAIGNDBNBJG,method_00);
      bVar1 = !bVar1;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void HJDDBKPCAFJ(GameObject LAIGNDBNBJG)  [RVA 0x304E8B4]
// AKJJAPEHKCG$$HJDDBKPCAFJ @ RVA 0x304E8B4

void AKJJAPEHKCG__HJDDBKPCAFJ(UnityEngine_GameObject_o *LAIGNDBNBJG,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_Object_array *args;
  System_String_o *pSVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_04565e31 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_13977/*"TutorialExtension: GameObject '{0}' don't have any TutorialControl!"*/);
    DAT_04565e31 = 1;
  }
  if (LAIGNDBNBJG != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>
                  (LAIGNDBNBJG,Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x != (UnityEngine_Object_o *)0x0) {
        *(undefined1 *)&x[1].monitor = 0;
        return;
      }
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)LAIGNDBNBJG,(MethodInfo *)0x0);
      if (args != (System_Object_array *)0x0) {
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar2;
          thunk_FUN_01c20e04(args->m_Items,pSVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_13977/*"TutorialExtension: GameObject '{0}' don't have any TutorialControl!"*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void GOCEMJOCNEE(GameObject LAIGNDBNBJG)  [RVA 0x304EB18]
// AKJJAPEHKCG$$GOCEMJOCNEE @ RVA 0x304EB18

void AKJJAPEHKCG__GOCEMJOCNEE(UnityEngine_GameObject_o *LAIGNDBNBJG,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  System_Object_array *args;
  System_String_o *pSVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_04565e32 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_13977/*"TutorialExtension: GameObject '{0}' don't have any TutorialControl!"*/);
    DAT_04565e32 = 1;
  }
  if (LAIGNDBNBJG != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>
                  (LAIGNDBNBJG,Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x != (UnityEngine_Object_o *)0x0) {
        *(undefined1 *)&x[1].monitor = 1;
        return;
      }
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)LAIGNDBNBJG,(MethodInfo *)0x0);
      if (args != (System_Object_array *)0x0) {
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar2;
          thunk_FUN_01c20e04(args->m_Items,pSVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_13977/*"TutorialExtension: GameObject '{0}' don't have any TutorialControl!"*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool MNKFDLHJPAA(Graphic DAHDMONMPFJ)  [RVA 0x304EC80]
// AKJJAPEHKCG$$MNKFDLHJPAA @ RVA 0x304EC80

bool AKJJAPEHKCG__MNKFDLHJPAA(UnityEngine_UI_Graphic_o *DAHDMONMPFJ,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar2;
  MethodInfo *method_00;
  
  pNVar2 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    bVar1 = false;
    if ((pNVar2->fields).DBNNMLAONOF != false) {
      bVar1 = LJLLAKHOFFF__HGHDGHHEFEP(DAHDMONMPFJ,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = AKJJAPEHKCG__KCMMEMJNMLI(DAHDMONMPFJ,method_00);
        bVar1 = !bVar1;
      }
      else {
        bVar1 = false;
      }
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool MNKFDLHJPAA(Selectable PFNMDNHEFEC)  [RVA 0x304ECD0]
// AKJJAPEHKCG$$MNKFDLHJPAA @ RVA 0x304ECD0

bool AKJJAPEHKCG__MNKFDLHJPAA(UnityEngine_UI_Selectable_o *PFNMDNHEFEC,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_UI_Graphic_o *x;
  
  if ((DAT_04565e33 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565e33 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    bVar1 = false;
    if ((pNVar2->fields).DBNNMLAONOF != false) {
      if (PFNMDNHEFEC == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_0314ed78;
      x = (PFNMDNHEFEC->fields).m_TargetGraphic;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if ((bVar1) ||
         (bVar1 = LJLLAKHOFFF__HGHDGHHEFEP((PFNMDNHEFEC->fields).m_TargetGraphic,(MethodInfo *)0x0),
         method_00 = extraout_x1_00, bVar1)) {
        bVar1 = AKJJAPEHKCG__KCMMEMJNMLI(PFNMDNHEFEC,method_00);
        bVar1 = !bVar1;
      }
      else {
        bVar1 = false;
      }
    }
    return bVar1;
  }
LAB_0314ed78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void GOCEMJOCNEE(Selectable PFNMDNHEFEC)  [RVA 0x304ED98]
// AKJJAPEHKCG$$GOCEMJOCNEE @ RVA 0x304ED98

void AKJJAPEHKCG__GOCEMJOCNEE(UnityEngine_UI_Selectable_o *PFNMDNHEFEC,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  
  if (PFNMDNHEFEC != (UnityEngine_UI_Selectable_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)PFNMDNHEFEC,(MethodInfo *)0x0);
    AKJJAPEHKCG__GOCEMJOCNEE(LAIGNDBNBJG,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool KCMMEMJNMLI(GameObject LAIGNDBNBJG)  [RVA 0x304EA34]
// AKJJAPEHKCG$$KCMMEMJNMLI @ RVA 0x304EA34

bool AKJJAPEHKCG__KCMMEMJNMLI(UnityEngine_GameObject_o *LAIGNDBNBJG,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04565e34 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565e34 = 1;
  }
  if (LAIGNDBNBJG != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>
                  (LAIGNDBNBJG,Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_0314eadc;
      bVar1 = *(char *)&x[1].monitor != '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0314eadc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool KCMMEMJNMLI(Selectable PFNMDNHEFEC)  [RVA 0x304ED7C]
// AKJJAPEHKCG$$KCMMEMJNMLI @ RVA 0x304ED7C

bool AKJJAPEHKCG__KCMMEMJNMLI(UnityEngine_UI_Selectable_o *PFNMDNHEFEC,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *method_00;
  
  if (PFNMDNHEFEC != (UnityEngine_UI_Selectable_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)PFNMDNHEFEC,(MethodInfo *)0x0);
    bVar1 = AKJJAPEHKCG__KCMMEMJNMLI(LAIGNDBNBJG,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

