// TypeDefIndex 2270
// Namespace: 
// public class AEGOLGIJEBI.AOIPPHGJEND : AEGOLGIJEBI.JDFHIMLMEJF
// Fields:
//   public readonly int KAAFCPPBEKP; // 0x30
//   public readonly int DFNFHPKKHID; // 0x34

// ===== public void .ctor(string JGHIJMJNJLE, int KPOFJIDGDJM, int PIPODGPCPAA, int EJABGOLHHBC, int DCNEGDENHII, int CIJJIMPFAMF, int BDAHFBJOPDA)  [RVA 0x3302E64]
// AEGOLGIJEBI.AOIPPHGJEND$$.ctor @ RVA 0x3302E64

void AEGOLGIJEBI_AOIPPHGJEND___ctor
               (AEGOLGIJEBI_AOIPPHGJEND_o *__this,System_String_o *JGHIJMJNJLE,int32_t KPOFJIDGDJM,
               int32_t PIPODGPCPAA,int32_t EJABGOLHHBC,int32_t DCNEGDENHII,int32_t CIJJIMPFAMF,
               int32_t BDAHFBJOPDA,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)BDAHFBJOPDA;
                    /* try { // try from 03402e9c to 03502ea7 has its CatchHandler @ 034029c0 */
                    /* try { // try from 03402ea8 to 03502eaf has its CatchHandler @ 03402eb0 */
  if ((DAT_04567736 & 1) == 0) {
                    /* catch() { ... } // from try @ 03402e34 with catch @ 03402eb0
                       catch() { ... } // from try @ 03402ea8 with catch @ 03402eb0 */
    FUN_01bab630(&StringLiteral_11641/*"STRIKE"*/);
    DAT_04567736 = 1;
  }
  AEGOLGIJEBI_JDFHIMLMEJF___ctor
            ((AEGOLGIJEBI_JDFHIMLMEJF_o *)__this,StringLiteral_11641/*"STRIKE"*/,JGHIJMJNJLE,KPOFJIDGDJM,
             PIPODGPCPAA,EJABGOLHHBC,DCNEGDENHII,method_00);
  (__this->fields).KAAFCPPBEKP = CIJJIMPFAMF;
  (__this->fields).DFNFHPKKHID = BDAHFBJOPDA;
  return;
}

