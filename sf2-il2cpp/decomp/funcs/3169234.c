// AFIEAGJGHGK$$.ctor @ RVA 0x3169234

void AFIEAGJGHGK___ctor(AFIEAGJGHGK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *__this_00;
  System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o **ppSVar1;
  
  if ((DAT_045668d7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_TypeInfo);
    DAT_045668d7 = 1;
  }
  __this_00 = (System_Collections_Generic_List_AFIEAGJGHGK_PACFKHPIMAP__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AFIEAGJGHGK_PACFKHPIMAP>__ctor__);
  ppSVar1 = &(__this->fields).DIMDJNDKCBG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  COFFJADEMJF___ctor((COFFJADEMJF_o *)__this,7,HEHMPFLAEGE,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).EAMLBCJEKDF = 0.0;
  (__this->fields).DLJPCGPGONK = 0.0;
  (__this->fields).AECJDMDHFAO = false;
  (__this->fields).MHHHFGONJGG = 0.0;
  (__this->fields).CDGJHNFHJDI = true;
  (__this->fields).DJILDJOHNGE = false;
  (__this->fields).KKANPDICHBI = 1;
  (__this->fields).EGEBPLAKCCK = false;
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,4,(MethodInfo *)0x0);
  CNIGOFCKBGI__DENNGFKNHKO((CNIGOFCKBGI_o *)__this,1,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
                    /* WARNING: Could not recover jumptable at 0x03269338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._13_DGLJCGNHLIG.methodPtr)
            (__this,(__this->klass->vtable)._13_DGLJCGNHLIG.method);
  return;
}

