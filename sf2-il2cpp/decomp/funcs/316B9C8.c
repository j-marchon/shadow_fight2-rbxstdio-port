// NFGLEDADCGL$$.ctor @ RVA 0x316B9C8

void NFGLEDADCGL___ctor(NFGLEDADCGL_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,MethodInfo *method)

{
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  System_Collections_Generic_List_HNFFPPPDKDK__o **ppSVar1;
  KJBGNIGNECD_o *__this_01;
  KJBGNIGNECD_o **ppKVar2;
  PJKHAJKEHEL_o **ppPVar3;
  
  if ((DAT_045668f8 & 1) == 0) {
    FUN_01bab630(&KJBGNIGNECD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HNFFPPPDKDK>_TypeInfo);
    DAT_045668f8 = 1;
  }
  __this_00 = (System_Collections_Generic_List_HNFFPPPDKDK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HNFFPPPDKDK>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HNFFPPPDKDK>__ctor__);
  ppSVar1 = &(__this->fields).PEJIOCBFEEE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (KJBGNIGNECD_o *)thunk_FUN_01bda818(KJBGNIGNECD_TypeInfo);
  KJBGNIGNECD___ctor(__this_01,(MethodInfo *)0x0);
  ppKVar2 = &(__this->fields).GMHDPMNODMF;
  *ppKVar2 = __this_01;
  thunk_FUN_01c20e04(ppKVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppPVar3 = &(__this->fields).MFLNIMCFPDK;
  *ppPVar3 = OKBIKHHKOEN;
  thunk_FUN_01c20e04(ppPVar3,OKBIKHHKOEN);
  return;
}

