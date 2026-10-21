// IDDIABHBDEE$$.cctor @ RVA 0x3387740

void IDDIABHBDEE___cctor(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_array *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04567baa & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_435);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_436);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&FBEOLJNHGNE_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567baa = 1;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  if ((FBEOLJNHGNE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(0x1e,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar4 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar4 != (System_String_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1] = pSVar3;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(0xf,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar4 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar4 != (System_String_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar4->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar4->m_Items[(int)uVar1] = pSVar3;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(0xe,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar4 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar4 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar4->m_Items[(int)uVar1] = pSVar3;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(0x15,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar4 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar4 != (System_String_array *)0x0) {
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar4->m_Items[(int)uVar1] = pSVar3;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(0x22,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar4 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar4 != (System_String_array *)0x0) {
              uVar1 = (__this->fields)._size;
              if (uVar1 < (uint)pSVar4->max_length) {
                (__this->fields)._size = uVar1 + 1;
                pSVar4->m_Items[(int)uVar1] = pSVar3;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,
                           (Il2CppObject *)pSVar3,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(0x1c,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<string>_Add__;
              pSVar4 = (__this->fields)._items;
              (__this->fields)._version = (__this->fields)._version + 1;
              if (pSVar4 != (System_String_array *)0x0) {
                uVar1 = (__this->fields)._size;
                if (uVar1 < (uint)pSVar4->max_length) {
                  (__this->fields)._size = uVar1 + 1;
                  pSVar4->m_Items[(int)uVar1] = pSVar3;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,
                             (Il2CppObject *)pSVar3,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(0x16,(MethodInfo *)0x0);
                lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                pSVar4 = (__this->fields)._items;
                (__this->fields)._version = (__this->fields)._version + 1;
                if (pSVar4 != (System_String_array *)0x0) {
                  uVar1 = (__this->fields)._size;
                  if (uVar1 < (uint)pSVar4->max_length) {
                    (__this->fields)._size = uVar1 + 1;
                    pSVar4->m_Items[(int)uVar1] = pSVar3;
                    thunk_FUN_01c20e04();
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,
                               (Il2CppObject *)pSVar3,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(6,(MethodInfo *)0x0);
                  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                  pSVar4 = (__this->fields)._items;
                  (__this->fields)._version = (__this->fields)._version + 1;
                  if (pSVar4 != (System_String_array *)0x0) {
                    uVar1 = (__this->fields)._size;
                    if (uVar1 < (uint)pSVar4->max_length) {
                      (__this->fields)._size = uVar1 + 1;
                      pSVar4->m_Items[(int)uVar1] = pSVar3;
                      thunk_FUN_01c20e04();
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this,
                                 (Il2CppObject *)pSVar3,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    }
                    pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(0x25,(MethodInfo *)0x0);
                    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                    pSVar4 = (__this->fields)._items;
                    (__this->fields)._version = (__this->fields)._version + 1;
                    if (pSVar4 != (System_String_array *)0x0) {
                      uVar1 = (__this->fields)._size;
                      if (uVar1 < (uint)pSVar4->max_length) {
                        (__this->fields)._size = uVar1 + 1;
                        pSVar4->m_Items[(int)uVar1] = pSVar3;
                        thunk_FUN_01c20e04();
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this,
                                   (Il2CppObject *)pSVar3,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      pSVar3 = FBEOLJNHGNE__FHHGLEHGBKC(0x17,(MethodInfo *)0x0);
                      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                      pSVar4 = (__this->fields)._items;
                      (__this->fields)._version = (__this->fields)._version + 1;
                      if (pSVar4 != (System_String_array *)0x0) {
                        uVar1 = (__this->fields)._size;
                        if (uVar1 < (uint)pSVar4->max_length) {
                          (__this->fields)._size = uVar1 + 1;
                          pSVar4->m_Items[(int)uVar1] = pSVar3;
                          thunk_FUN_01c20e04();
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this,
                                     (Il2CppObject *)pSVar3,
                                     *(MethodInfo_26E4DAC **)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                        }
                        IDDIABHBDEE_TypeInfo->static_fields->DIOJHDKIGLE = __this;
                        thunk_FUN_01c20e04(IDDIABHBDEE_TypeInfo->static_fields,__this);
                        MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)MOPNMEHIMFJ,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_435
                                   ,(MethodInfo *)0x0);
                        LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  ((System_Array_o *)LFINFBNOLFG,
                                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_436
                                   ,(MethodInfo *)0x0);
                        pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0)
                        ;
                        ppSVar5 = &IDDIABHBDEE_TypeInfo->static_fields->JIKGBGGLIJG;
                        *ppSVar5 = pSVar3;
                        thunk_FUN_01c20e04(ppSVar5,pSVar3);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

