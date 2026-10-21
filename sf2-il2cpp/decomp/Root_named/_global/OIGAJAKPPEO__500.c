// TypeDefIndex 500
// Namespace: 
// public class OIGAJAKPPEO : Model
// Fields:
//   private bool DIABJIEBJNA; // 0x471

// ===== public override bool EEMIOBINNJG()  [RVA 0x3589E54]
// OIGAJAKPPEO$$EEMIOBINNJG @ RVA 0x3589E54

bool OIGAJAKPPEO__EEMIOBINNJG(OIGAJAKPPEO_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03689cbc with catch @ 03689e54 */
                    /* catch() { ... } // from try @ 03689cf4 with catch @ 03689e58 */
  return true;
}


// ===== public override bool CBGCMJCJJKP(InfoAnimation OCFNILDEHHP, int OAFGMHOFEKM = 0, bool LGJEEEFEAKB = False, int KGJLIPJNNKB = -1)  [RVA 0x3589E5C]
// OIGAJAKPPEO$$CBGCMJCJJKP @ RVA 0x3589E5C

bool OIGAJAKPPEO__CBGCMJCJJKP
               (OIGAJAKPPEO_o *__this,InfoAnimation_o *OCFNILDEHHP,int32_t OAFGMHOFEKM,
               bool LGJEEEFEAKB,int32_t KGJLIPJNNKB,MethodInfo *method)

{
  bool bVar1;
  Model_o *__this_00;
  ModelAnimation_o *__this_01;
  
                    /* catch() { ... } // from try @ 03689c64 with catch @ 03689e5c */
                    /* catch() { ... } // from try @ 03689c40 with catch @ 03689e60 */
                    /* try { // try from 03689e78 to 03789e8f has its CatchHandler @ 03689f44 */
  if ((__this->fields).super.field_0x461 != '\0') {
                    /* try { // try from 03689e90 to 03789f33 has its CatchHandler @ 03689bc4 */
    bVar1 = Model__CBGCMJCJJKP
                      ((Model_o *)__this,OCFNILDEHHP,OAFGMHOFEKM,LGJEEEFEAKB,KGJLIPJNNKB,
                       (MethodInfo *)0x0);
    return bVar1;
  }
  __this_00 = (__this->fields).super.NFMBPIPEKGF;
  if (__this_00 != (Model_o *)0x0) {
    Model__NNDNLMDLKKA(__this_00,__this,(MethodInfo *)0x0);
    (__this->fields).super.field_0x461 = 1;
    bVar1 = Model__CBGCMJCJJKP
                      ((Model_o *)__this,OCFNILDEHHP,OAFGMHOFEKM,LGJEEEFEAKB,KGJLIPJNNKB,
                       (MethodInfo *)0x0);
    __this_01 = (__this->fields).super.OAKOFJJIOFF;
    if (__this_01 != (ModelAnimation_o *)0x0) {
      ModelAnimation__BDHAMOEKNNK(__this_01,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(ModelParameters IMMNELPBGIF)  [RVA 0x3589F14]
// OIGAJAKPPEO$$.ctor @ RVA 0x3589F14

void OIGAJAKPPEO___ctor(OIGAJAKPPEO_o *__this,ModelParameters_o *IMMNELPBGIF,MethodInfo *method)

{
  Model___ctor((Model_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}

