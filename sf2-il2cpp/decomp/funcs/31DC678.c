// MCIEPLBJLKN$$.ctor @ RVA 0x31DC678

void MCIEPLBJLKN___ctor(MCIEPLBJLKN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  MGNPHCAAEIO_FNHCJBGGHLH_o *__this_00;
  MGNPHCAAEIO_FNHCJBGGHLH_o **ppMVar1;
  
  if ((DAT_04566d1c & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_FNHCJBGGHLH_TypeInfo);
    DAT_04566d1c = 1;
  }
  __this_00 = (MGNPHCAAEIO_FNHCJBGGHLH_o *)thunk_FUN_01bda818(MGNPHCAAEIO_FNHCJBGGHLH_TypeInfo);
  MGNPHCAAEIO_FNHCJBGGHLH___ctor(__this_00,(MethodInfo *)0x0);
  ppMVar1 = &(__this->fields).BFLPNKEHKCM;
  *ppMVar1 = __this_00;
  thunk_FUN_01c20e04(ppMVar1,__this_00);
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,0xb,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032dc704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}

