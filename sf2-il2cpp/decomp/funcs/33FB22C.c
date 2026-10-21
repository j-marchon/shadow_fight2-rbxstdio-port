// FHHDFKADHEI$$.ctor @ RVA 0x33FB22C

void FHHDFKADHEI___ctor(FHHDFKADHEI_o *__this,NKDMOOEFPHJ_o *LGAJPKJAIFG,int32_t LDLBEOEFJPF,
                       int32_t EOGMGDGBOOD,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  NKDMOOEFPHJ_o **ppNVar2;
  
  if ((DAT_04567fb6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567fb6 = 1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).FFOFMCPEKFJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).NBMGGJOLKHJ;
  *ppNVar2 = LGAJPKJAIFG;
  (__this->fields).AKLBCOPFAIO = LDLBEOEFJPF;
  (__this->fields).EOAEIECDCLC = EOGMGDGBOOD;
  thunk_FUN_01c20e04(ppNVar2,LGAJPKJAIFG);
  return;
}

