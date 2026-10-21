// FFDBJONGOLC$$BENDMCOBOKL @ RVA 0x355C31C

void FFDBJONGOLC__BENDMCOBOKL
               (System_String_o *DIHAKADKIKM,System_Func_string__o *OLCNFFOMADA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  FFDBJONGOLC_GEIPHMENLOJ_o *__this;
  System_Func_string__o **ppSVar3;
  FFDBJONGOLC_GEIPHMENLOJ_array *pFVar4;
  System_Collections_Generic_List_FFDBJONGOLC_GEIPHMENLOJ__o *__this_00;
  
  if ((DAT_04568b81 & 1) == 0) {
    FUN_01bab630(&FFDBJONGOLC_TypeInfo);
    FUN_01bab630(&FFDBJONGOLC_GEIPHMENLOJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FFDBJONGOLC_GEIPHMENLOJ>_Add__);
    DAT_04568b81 = 1;
  }
  if ((FFDBJONGOLC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = FFDBJONGOLC_TypeInfo->static_fields->FIDOJDOEFIH;
  __this = (FFDBJONGOLC_GEIPHMENLOJ_o *)thunk_FUN_01bda818(FFDBJONGOLC_GEIPHMENLOJ_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (FFDBJONGOLC_GEIPHMENLOJ_o *)0x0) {
    (__this->fields).DIHAKADKIKM = DIHAKADKIKM;
    thunk_FUN_01c20e04(&__this->fields,DIHAKADKIKM);
    ppSVar3 = &(__this->fields).OLCNFFOMADA;
    *ppSVar3 = OLCNFFOMADA;
    thunk_FUN_01c20e04(ppSVar3,OLCNFFOMADA);
    lVar2 = Method_System_Collections_Generic_List<FFDBJONGOLC_GEIPHMENLOJ>_Add__;
    if (__this_00 != (System_Collections_Generic_List_FFDBJONGOLC_GEIPHMENLOJ__o *)0x0) {
      pFVar4 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pFVar4 != (FFDBJONGOLC_GEIPHMENLOJ_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pFVar4->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pFVar4->m_Items[(int)uVar1] = __this;
          thunk_FUN_01c20e04(pFVar4->m_Items + (int)uVar1,__this);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

