// HDBPKHNKOGI$$.ctor @ RVA 0x3194A00

void HDBPKHNKOGI___ctor(HDBPKHNKOGI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  PNGKLCHKPEO_o *__this_00;
  PNGKLCHKPEO_o **ppPVar1;
  
  if ((DAT_04566a5a & 1) == 0) {
    FUN_01bab630(&PNGKLCHKPEO_TypeInfo);
    DAT_04566a5a = 1;
  }
  __this_00 = (PNGKLCHKPEO_o *)thunk_FUN_01bda818(PNGKLCHKPEO_TypeInfo);
  PNGKLCHKPEO___ctor(__this_00,(MethodInfo *)0x0);
  ppPVar1 = &(__this->fields).NDOAINJDMIH;
  *ppPVar1 = __this_00;
  thunk_FUN_01c20e04(ppPVar1,__this_00);
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,5,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03294a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}

