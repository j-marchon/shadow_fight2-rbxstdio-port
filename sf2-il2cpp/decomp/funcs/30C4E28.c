// EOOEOHKLOFJ$$MENDBBALPEC @ RVA 0x30C4E28

System_Collections_Generic_IReadOnlyList_string__o * EOOEOHKLOFJ__MENDBBALPEC(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar3;
  System_Collections_Generic_List_string__o **ppSVar4;
  System_String_array *pSVar5;
  
  if ((DAT_045662aa & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662aa = 1;
  }
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (EOOEOHKLOFJ_TypeInfo->static_fields->LDBFKOHBOLC ==
      (System_Collections_Generic_List_string__o *)0x0) {
    __this = (System_Collections_Generic_List_string__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<string>__ctor__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar5 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar5 != (System_String_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = pSVar3;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = NLPJLHOEAOE__DGBOOECJDDG((MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar5 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar5 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar5->m_Items[(int)uVar1] = pSVar3;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar3 = NLPJLHOEAOE__BPEDDHLKDID((MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar5 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar5 != (System_String_array *)0x0) {
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar5->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar5->m_Items[(int)uVar1] = pSVar3;
              thunk_FUN_01c20e04();
                    /* try { // try from 031c4ff8 to 032c5123 has its CatchHandler @ 031c4ff8
                       catch() { ... } // from try @ 031c4ff8 with catch @ 031c4ff8
                       catch() { ... } // from try @ 031c5220 with catch @ 031c4ff8
                       catch() { ... } // from try @ 031c52b8 with catch @ 031c4ff8
                       catch() { ... } // from try @ 031c53a4 with catch @ 031c4ff8
                       catch() { ... } // from try @ 031c5450 with catch @ 031c4ff8 */
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar3 = NLPJLHOEAOE__KAGDGCJOCOC((MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar5 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar5 != (System_String_array *)0x0) {
              uVar1 = (__this->fields)._size;
              if (uVar1 < (uint)pSVar5->max_length) {
                (__this->fields)._size = uVar1 + 1;
                pSVar5->m_Items[(int)uVar1] = pSVar3;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,
                           (Il2CppObject *)pSVar3,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              ppSVar4 = &EOOEOHKLOFJ_TypeInfo->static_fields->LDBFKOHBOLC;
              *ppSVar4 = __this;
              thunk_FUN_01c20e04(ppSVar4,__this);
              goto LAB_031c5098;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031c5098:
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return (System_Collections_Generic_IReadOnlyList_string__o *)
         EOOEOHKLOFJ_TypeInfo->static_fields->LDBFKOHBOLC;
}

