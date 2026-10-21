// IPCACEBFONO$$.ctor @ RVA 0x34E190C

void IPCACEBFONO___ctor(IPCACEBFONO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *pSVar3;
  NKOIBKNPICN_o *pNVar4;
  NKOIBKNPICN_o **ppNVar5;
  IPCACEBFONO_ONKMJNMABJI_o *__this_00;
  MethodInfo *extraout_x1;
  IPCACEBFONO_ONKMJNMABJI_array *pIVar6;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o **ppSVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04568738 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_set_Capacity__);
    FUN_01bab630(&System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_TypeInfo);
    FUN_01bab630(&NKOIBKNPICN_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    FUN_01bab630(&IPCACEBFONO_ONKMJNMABJI_TypeInfo);
    DAT_04568738 = 1;
    method = extraout_x1;
  }
  pSVar3 = (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_TypeInfo,
                              method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>__ctor__);
  ppSVar7 = &(__this->fields).KCKCIPHKEEP;
  *ppSVar7 = pSVar3;
  thunk_FUN_01c20e04(ppSVar7,pSVar3);
  auVar9 = thunk_FUN_01bda818(NKOIBKNPICN_TypeInfo);
  pNVar4 = auVar9._0_8_;
  NKOIBKNPICN___ctor(pNVar4,auVar9._8_8_);
  ppNVar5 = &(__this->fields).MAABMIGPEIL;
  *ppNVar5 = pNVar4;
  thunk_FUN_01c20e04(ppNVar5,pNVar4);
  auVar9 = thunk_FUN_01bda818(NKOIBKNPICN_TypeInfo);
  pNVar4 = auVar9._0_8_;
  NKOIBKNPICN___ctor(pNVar4,auVar9._8_8_);
  ppNVar5 = &(__this->fields).EANHEBKMBKB;
  *ppNVar5 = pNVar4;
  thunk_FUN_01c20e04(ppNVar5,pNVar4);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  (__this->fields).BJIKPLGMOMI = 0;
  (__this->fields).EHMBDMLBKEA = 0;
  if (*ppSVar7 != (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) {
    System_Collections_Generic_List<object>__set_Capacity
              ((System_Collections_Generic_List_object__o *)*ppSVar7,0x96,
               Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_set_Capacity__);
    iVar8 = 1;
    while( true ) {
      __this_00 = (IPCACEBFONO_ONKMJNMABJI_o *)thunk_FUN_01bda818(IPCACEBFONO_ONKMJNMABJI_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      if (__this_00 == (IPCACEBFONO_ONKMJNMABJI_o *)0x0) break;
      (__this_00->fields).BAKEKHHEKIB = iVar8;
      (__this_00->fields).HLFBMBHOPMI = iVar8;
      (__this_00->fields).BCHBDELEFGK = false;
      lVar2 = Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_Add__;
      pSVar3 = *ppSVar7;
      if (pSVar3 == (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) break;
      pIVar6 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pIVar6 == (IPCACEBFONO_ONKMJNMABJI_array *)0x0) break;
      uVar1 = (pSVar3->fields)._size;
      if (uVar1 < (uint)pIVar6->max_length) {
        (pSVar3->fields)._size = uVar1 + 1;
        pIVar6->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1,__this_00);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar8 = iVar8 + 1;
      if (iVar8 == 0x97) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

