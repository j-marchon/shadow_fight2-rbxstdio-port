// NKDMOOEFPHJ$$.ctor @ RVA 0x33A9CE4

void NKDMOOEFPHJ___ctor(NKDMOOEFPHJ_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_ECENNHNBAME__NKDMOOEFPHJ_ACFDNGGGDIJ__o **ppSVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar3;
  
  if ((DAT_04567d06 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_TypeInfo
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04567d06 = 1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>__ctor__
            );
  ppSVar2 = &(__this->fields).NCICFCFDKGL;
  *ppSVar2 = (System_Collections_Generic_Dictionary_ECENNHNBAME__NKDMOOEFPHJ_ACFDNGGGDIJ__o *)pSVar1
  ;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,
             Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>__ctor__
            );
  ppSVar2 = &(__this->fields).JIEJMAMHHMD;
  *ppSVar2 = (System_Collections_Generic_Dictionary_ECENNHNBAME__NKDMOOEFPHJ_ACFDNGGGDIJ__o *)pSVar1
  ;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar3 = &(__this->fields).MJFICLOHJEL;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PDKOKGEECDC = BCKBBGCOMJD;
  thunk_FUN_01c20e04(&__this->fields,BCKBBGCOMJD);
  return;
}

