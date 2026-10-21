// IPCACEBFONO$$AJDGKKOPLIM @ RVA 0x34E1FD8

IPCACEBFONO_ONKMJNMABJI_o *
IPCACEBFONO__AJDGKKOPLIM(IPCACEBFONO_o *__this,int32_t GCMHMONNHII,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *__this_00;
  IPCACEBFONO_ONKMJNMABJI_o *pIVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568740 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_GetEnumerator__);
    DAT_04568740 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KCKCIPHKEEP;
  if (__this_00 == (System_Collections_Generic_List_IPCACEBFONO_ONKMJNMABJI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IPCACEBFONO_ONKMJNMABJI>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_MoveNext__
                      );
    if (!bVar1) {
      pIVar2 = (IPCACEBFONO_ONKMJNMABJI_o *)0x0;
      break;
    }
    if ((IPCACEBFONO_ONKMJNMABJI_o *)local_48.fields._current == (IPCACEBFONO_ONKMJNMABJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar2 = (IPCACEBFONO_ONKMJNMABJI_o *)local_48.fields._current;
  } while (((IPCACEBFONO_ONKMJNMABJI_Fields *)((long)local_48.fields._current + 0x10))->BAKEKHHEKIB
           != GCMHMONNHII);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<IPCACEBFONO_ONKMJNMABJI>_Dispose__);
  return pIVar2;
}

