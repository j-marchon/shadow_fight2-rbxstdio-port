// TypeDefIndex 2101
// Namespace: Nekki.SF2.GUI.Tutorial
// public class TutorialNode : MonoBehaviour
// Fields:
//   private string _ID; // 0x20
//   private TutorialNode MKAAKGJNBHI; // 0x28
//   private List<TutorialNode> EOIPAPCMGGF; // 0x30

// ===== public string get_ID()  [RVA 0x32CA750]
// Nekki.SF2.GUI.Tutorial.TutorialNode$$get_ID @ RVA 0x32CA750

System_String_o *
Nekki_SF2_GUI_Tutorial_TutorialNode__get_ID
          (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,MethodInfo *method)

{
  return (__this->fields)._ID;
}


// ===== public void set_ID(string CJNHFNHJHPE)  [RVA 0x32CA758]
// Nekki.SF2.GUI.Tutorial.TutorialNode$$set_ID @ RVA 0x32CA758

void Nekki_SF2_GUI_Tutorial_TutorialNode__set_ID
               (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._ID = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void Start()  [RVA 0x32CA760]
// Nekki.SF2.GUI.Tutorial.TutorialNode$$Start @ RVA 0x32CA760

void Nekki_SF2_GUI_Tutorial_TutorialNode__Start
               (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  System_String_o *pSVar4;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar7;
  Nekki_SF2_GUI_Tutorial_TutorialNode_array *pNVar8;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o **ppNVar9;
  
  if ((DAT_04567515 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInParent<TutorialNode>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Add__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_13978/*"TutorialNode.Start: incorrect ID '{0}'!"*/);
    DAT_04567515 = 1;
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    pNVar7 = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0;
    if (bVar2) {
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar3 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_033ca9f4;
      pNVar7 = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)
               UnityEngine_Component__GetComponentInParent<object>
                         ((UnityEngine_Component_o *)pUVar3,
                          Method_UnityEngine_Component_GetComponentInParent<TutorialNode>__);
    }
    if (__this != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
      ppNVar9 = &(__this->fields).MKAAKGJNBHI;
      *ppNVar9 = pNVar7;
      thunk_FUN_01c20e04(ppNVar9);
      pNVar7 = *ppNVar9;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      lVar5 = Method_System_Collections_Generic_List<TutorialNode>_Add__;
      if (bVar2) {
        if ((*ppNVar9 == (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) ||
           (__this_00 = ((*ppNVar9)->fields).EOIPAPCMGGF,
           __this_00 == (System_Collections_Generic_List_TutorialNode__o *)0x0)) goto LAB_033ca9f4;
        pNVar8 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pNVar8 == (Nekki_SF2_GUI_Tutorial_TutorialNode_array *)0x0) goto LAB_033ca9f4;
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pNVar8->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pNVar8->m_Items[(int)uVar1] = __this;
          thunk_FUN_01c20e04(pNVar8->m_Items + (int)uVar1,__this);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        GPEHLCDLNDL__LNENELMPIOG(__this,(MethodInfo *)0x0);
      }
      bVar2 = System_String__IsNullOrEmpty((__this->fields)._ID,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar4 = (__this->fields)._ID;
        if (pSVar4 == (System_String_o *)0x0) goto LAB_033ca9f4;
        bVar2 = System_String__Contains(pSVar4,0x2e,(MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
      }
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar4 = (__this->fields)._ID;
        if ((pSVar4 != (System_String_o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        {
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar4;
          thunk_FUN_01c20e04(args->m_Items,pSVar4);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_13978/*"TutorialNode.Start: incorrect ID '{0}'!"*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_033ca9f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x32CAA08]
// Nekki.SF2.GUI.Tutorial.TutorialNode$$OnDestroy @ RVA 0x32CAA08

void Nekki_SF2_GUI_Tutorial_TutorialNode__OnDestroy
               (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar2;
  
  if ((DAT_04567516 & 1) == 0) {
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Remove__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567516 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).MKAAKGJNBHI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).MKAAKGJNBHI;
    if ((pNVar2 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) &&
       (__this_00 = (pNVar2->fields).EOIPAPCMGGF,
       __this_00 != (System_Collections_Generic_List_TutorialNode__o *)0x0)) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                 Method_System_Collections_Generic_List<TutorialNode>_Remove__);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  GPEHLCDLNDL__OHJINPLLLIM(__this,(MethodInfo *)0x0);
  return;
}


// ===== public TutorialNode GetNode(string KKJPPDNKGAI)  [RVA 0x32CAAD8]
// Nekki.SF2.GUI.Tutorial.TutorialNode$$GetNode @ RVA 0x32CAAD8

Nekki_SF2_GUI_Tutorial_TutorialNode_o *
Nekki_SF2_GUI_Tutorial_TutorialNode__GetNode
          (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,System_String_o *KKJPPDNKGAI,
          MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567517 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TutorialNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TutorialNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TutorialNode>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_GetEnumerator__);
    DAT_04567517 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).EOIPAPCMGGF;
  if (__this_00 == (System_Collections_Generic_List_TutorialNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TutorialNode>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<TutorialNode>_MoveNext__);
    pNVar2 = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)local_50.fields._current;
    if (!bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0;
      break;
    }
    if ((Nekki_SF2_GUI_Tutorial_TutorialNode_o *)local_50.fields._current ==
        (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)local_50.fields._current,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
  } while ((!bVar1) ||
          (bVar1 = System_String__op_Equality
                             (((Nekki_SF2_GUI_Tutorial_TutorialNode_Fields *)((long)pNVar2 + 0x10))
                              ->_ID,KKJPPDNKGAI,(MethodInfo *)0x0), !bVar1));
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<TutorialNode>_Dispose__);
  return pNVar2;
}


// ===== public void .ctor()  [RVA 0x32CAC70]
// Nekki.SF2.GUI.Tutorial.TutorialNode$$.ctor @ RVA 0x32CAC70

void Nekki_SF2_GUI_Tutorial_TutorialNode___ctor
               (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  System_Collections_Generic_List_TutorialNode__o **ppSVar1;
  
  if ((DAT_04567518 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<TutorialNode>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567518 = 1;
  }
  (__this->fields)._ID = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_TutorialNode__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<TutorialNode>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TutorialNode>__ctor__);
  ppSVar1 = &(__this->fields).EOIPAPCMGGF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

