// OLKKAIFGGAK.IEMCMOPNPEA$$BOPOPKLPHOJ @ RVA 0x34F8350

void OLKKAIFGGAK_IEMCMOPNPEA__BOPOPKLPHOJ
               (OLKKAIFGGAK_IEMCMOPNPEA_o *__this,System_String_o *KGLJICLJHEL,
               OIGAJAKPPEO_o *BCKBBGCOMJD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  UnityEngine_GameObject_o *__this_00;
  System_Object_array *pSVar6;
  
  if ((DAT_0456880c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OIGAJAKPPEO>_TypeInfo);
    DAT_0456880c = 1;
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar4,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_ContainsKey__
                      );
    if (!bVar3) {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).EHJHKEEDKBE;
      pSVar5 = (System_Collections_Generic_List_object__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<OIGAJAKPPEO>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (pSVar5,Method_System_Collections_Generic_List<OIGAJAKPPEO>__ctor__);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_035f84dc;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar4,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject *)pSVar5,
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_Add__);
    }
    if ((BCKBBGCOMJD != (OIGAJAKPPEO_o *)0x0) &&
       (__this_00 = (BCKBBGCOMJD->fields).super.LDAKOINICNJ,
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).EHJHKEEDKBE;
      if ((pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar5 = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar4,(Il2CppObject *)KGLJICLJHEL,
                              Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                             ), lVar2 = Method_System_Collections_Generic_List<OIGAJAKPPEO>_Add__,
         pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
        pSVar6 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pSVar6 != (System_Object_array *)0x0) {
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)BCKBBGCOMJD;
            thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,BCKBBGCOMJD);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar5,(Il2CppObject *)BCKBBGCOMJD,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_035f84dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

