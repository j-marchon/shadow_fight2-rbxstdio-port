// TypeDefIndex 2832
// Namespace: 
// public class POEIJGLGEED.PGHHNOPEKLB
// Fields:
//   private POEIJGLGEED.PGHHNOPEKLB.EPDFBDBHENI PKPHIABHKFE; // 0x10

// ===== public void .ctor()  [RVA 0x342C0BC]
// POEIJGLGEED.PGHHNOPEKLB$$.ctor @ RVA 0x342C0BC

void POEIJGLGEED_PGHHNOPEKLB___ctor(POEIJGLGEED_PGHHNOPEKLB_o *__this,MethodInfo *method)

{
  POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568140 & 1) == 0) {
    FUN_01bab630(&POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_TypeInfo);
    DAT_04568140 = 1;
    method = extraout_x1;
  }
  __this_00 = (POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *)
              thunk_FUN_01bda818(POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_TypeInfo,method);
  (__this_00->fields).GDIJGCGHKIB = true;
                    /* try { // try from 0352c108 to 0362c10f has its CatchHandler @ 0352c198 */
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this->fields).PKPHIABHKFE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
                    /* try { // try from 0352c124 to 0362c137 has its CatchHandler @ 0352c19c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public POEIJGLGEED.PGHHNOPEKLB.EPDFBDBHENI LCOCCHEOMKG()  [RVA 0x342C140]
// POEIJGLGEED.PGHHNOPEKLB$$LCOCCHEOMKG @ RVA 0x342C140

POEIJGLGEED_PGHHNOPEKLB_EPDFBDBHENI_o *
POEIJGLGEED_PGHHNOPEKLB__LCOCCHEOMKG(POEIJGLGEED_PGHHNOPEKLB_o *__this,MethodInfo *method)

{
  return (__this->fields).PKPHIABHKFE;
}

