// TypeDefIndex 2434
// Namespace: 
// [CompilerGenerated]
// private sealed class ADACCFIHMAK.OIABPCCEKPB
// Fields:
//   public string systemLangLocale; // 0x10
//   public ADACCFIHMAK <>4__this; // 0x18

// ===== internal void KANOFGEJGGG(bool _)  [RVA 0x3343C44]
// ADACCFIHMAK.OIABPCCEKPB$$KANOFGEJGGG @ RVA 0x3343C44

void ADACCFIHMAK_OIABPCCEKPB__KANOFGEJGGG
               (ADACCFIHMAK_OIABPCCEKPB_o *__this,bool __,MethodInfo *method)

{
  ADACCFIHMAK_o *pAVar1;
  
  pAVar1 = (__this->fields).__4__this;
                    /* try { // try from 03443c50 to 03543c53 has its CatchHandler @ 03443c8c */
  if (pAVar1 != (ADACCFIHMAK_o *)0x0) {
                    /* try { // try from 03443c54 to 03543c5b has its CatchHandler @ 03443c88 */
    ADACCFIHMAK__FPABCLIIOIP(true,(MethodInfo *)(ulong)__);
    (pAVar1->fields).super._DGMNNLJEMIB_k__BackingField = true;
                    /* try { // try from 03443c64 to 03543c77 has its CatchHandler @ 03443d08 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3343C3C]
// ADACCFIHMAK.OIABPCCEKPB$$.ctor @ RVA 0x3343C3C

void ADACCFIHMAK_OIABPCCEKPB___ctor(ADACCFIHMAK_OIABPCCEKPB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool LECFCCOHEMG(DBNEEHGBCJD lang)  [RVA 0x3343C74]
// ADACCFIHMAK.OIABPCCEKPB$$LECFCCOHEMG @ RVA 0x3343C74

bool ADACCFIHMAK_OIABPCCEKPB__LECFCCOHEMG
               (ADACCFIHMAK_OIABPCCEKPB_o *__this,DBNEEHGBCJD_o *lang,MethodInfo *method)

{
  bool bVar1;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443bec with catch @ 03443c78
                       try { // try from 03443c78 to 03543caf has its CatchHandler @ 03443710 */
  if (lang != (DBNEEHGBCJD_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443bac with catch @ 03443c84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443c54 with catch @ 03443c88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443c50 with catch @ 03443c8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443b4c with catch @ 03443c90
                        */
    bVar1 = System_String__op_Equality
                      ((lang->fields)._AFGBGDNBOLL_k__BackingField,(__this->fields).systemLangLocale
                       ,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443b34 with catch @ 03443c94
                        */
  FUN_01bab8c8();
}

