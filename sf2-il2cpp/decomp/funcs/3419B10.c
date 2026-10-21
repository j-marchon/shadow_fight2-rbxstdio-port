// FGDNDHOEMND$$.ctor @ RVA 0x3419B10

void FGDNDHOEMND___ctor(FGDNDHOEMND_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  MBALPICJBHF_o *__this_00;
  MBALPICJBHF_o **ppMVar1;
  
  if ((DAT_045680bd & 1) == 0) {
    FUN_01bab630(&MBALPICJBHF_TypeInfo);
    DAT_045680bd = 1;
  }
  __this_00 = (MBALPICJBHF_o *)thunk_FUN_01bda818(MBALPICJBHF_TypeInfo);
  MBALPICJBHF___ctor(__this_00,(MethodInfo *)0x0);
  ppMVar1 = &(__this->fields).AHCGNPCNCKJ;
  *ppMVar1 = __this_00;
  thunk_FUN_01c20e04(ppMVar1,__this_00);
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,9,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03519b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}

