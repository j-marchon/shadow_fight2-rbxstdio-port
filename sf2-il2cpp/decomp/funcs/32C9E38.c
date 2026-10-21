// Nekki.SF2.GUI.Map.LampsPanel$$SetLampsVisible @ RVA 0x32C9E38

void Nekki_SF2_GUI_Map_LampsPanel__SetLampsVisible
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_Button__o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_ResolutionImage__o *pSVar5;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar6;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456750f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456750f = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).NPKEJHGOGOE;
  if (pSVar3 != (System_Collections_Generic_List_Button__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<Button>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__),
          pIVar1 = local_80.fields._current, bVar2) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if ((UnityEngine_Object_o *)pIVar1 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    pSVar5 = (__this->fields).GOAMNFEGHIB;
    if (pSVar5 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__
                               ), pIVar1 = local_a0.fields._current, bVar2) {
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if ((UnityEngine_Object_o *)pIVar1 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,
                 Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
      pSVar3 = (__this->fields).FGFAMIEFDEO;
      if (pSVar3 != (System_Collections_Generic_List_Button__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)pSVar3,
                   Method_System_Collections_Generic_List<Button>_GetEnumerator__);
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._list = local_b8.fields._list;
        local_80.fields._current = local_b8.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__
                                 ), pIVar1 = local_80.fields._current, bVar2) {
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            if ((UnityEngine_Object_o *)pIVar1 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
            if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
        pSVar5 = (__this->fields).GENBELDCMGN;
        if (pSVar5 != (System_Collections_Generic_List_ResolutionImage__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_b8,(System_Collections_Generic_List_object__o *)pSVar5,
                     Method_System_Collections_Generic_List<ResolutionImage>_GetEnumerator__);
          local_a0.fields._index = local_b8.fields._index;
          local_a0.fields._version = local_b8.fields._version;
          local_a0.fields._list = local_b8.fields._list;
          local_a0.fields._current = local_b8.fields._current;
          while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_a0,
                                    Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_MoveNext__
                                   ), pIVar1 = local_a0.fields._current, bVar2) {
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar2) {
              if ((UnityEngine_Object_o *)pIVar1 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
              if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<ResolutionImage>_Dispose__);
          pNVar6 = (__this->fields)._lampOn;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            pNVar6 = (__this->fields)._lampOn;
            if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
               (pUVar4 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
               pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033ca1dc;
            UnityEngine_GameObject__SetActive(pUVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
LAB_033ca1dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

