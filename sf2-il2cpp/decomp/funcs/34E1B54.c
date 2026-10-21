// IPCACEBFONO$$DGLJCGNHLIG @ RVA 0x34E1B54

void IPCACEBFONO__DGLJCGNHLIG(IPCACEBFONO_o *__this,MethodInfo *method)

{
  int iVar1;
  NKOIBKNPICN_o *pNVar2;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *__this_00;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_int__o *pSVar4;
  int index;
  
  if ((DAT_0456873a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_get_Item__);
    DAT_0456873a = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).EANHEBKMBKB;
  if (pNVar2 != (NKOIBKNPICN_o *)0x0) {
    NKOIBKNPICN__NDNPGAKJLHM(pNVar2,method);
    pNVar2 = (__this->fields).MAABMIGPEIL;
    if (pNVar2 != (NKOIBKNPICN_o *)0x0) {
      NKOIBKNPICN__NDNPGAKJLHM(pNVar2,method_00);
      pNVar2 = (__this->fields).MAABMIGPEIL;
      if ((pNVar2 != (NKOIBKNPICN_o *)0x0) &&
         (pSVar4 = (pNVar2->fields).OOIGOEAHPMA,
         pSVar4 != (System_Collections_Generic_List_int__o *)0x0)) {
        (pSVar4->fields)._size = 0;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        __this_00 = (__this->fields).KCKCIPHKEEP;
        if (__this_00 != (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) {
          iVar1 = (__this_00->fields)._size;
          if (iVar1 < 1) {
            return;
          }
          index = 0;
          do {
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_00,index,
                                Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_get_Item__
                               );
            if (pIVar3 == (Il2CppObject *)0x0) break;
            index = index + 1;
            *(undefined1 *)&pIVar3[1].monitor = 0;
            if (iVar1 == index) {
              return;
            }
            __this_00 = (__this->fields).KCKCIPHKEEP;
          } while (__this_00 != (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

