// TypeDefIndex 1994
// Namespace: 
// public class CGKOOBKMDJJ : OHPOFOPJIMB
// Fields:
//   private string HONOOAELMFJ; // 0x20
//   private long HIIKOFEFMPG; // 0x28

// ===== public override void IKDPMKOIDMP()  [RVA 0x329272C]
// CGKOOBKMDJJ$$IKDPMKOIDMP @ RVA 0x329272C

void CGKOOBKMDJJ__IKDPMKOIDMP(CGKOOBKMDJJ_o *__this,MethodInfo *method)

{
                    /* try { // try from 03392730 to 03492737 has its CatchHandler @ 03392778 */
                    /* try { // try from 03392738 to 0349276f has its CatchHandler @ 03392638 */
  DialogsOpener__IOIEGGPLDMF
            ((__this->fields).HIIKOFEFMPG,(__this->fields).HONOOAELMFJ,(MethodInfo *)0x0);
  return;
}


// ===== public override bool BNNIDPDMOIL()  [RVA 0x329273C]
// CGKOOBKMDJJ$$BNNIDPDMOIL @ RVA 0x329273C

bool CGKOOBKMDJJ__BNNIDPDMOIL(CGKOOBKMDJJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    bVar1 = NDPMLPGANCI__FHLFKIOFBKL(__this_00,(MethodInfo *)0x0);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(long ANGBPBINHBL, string BKJJFPJOCGP)  [RVA 0x3292768]
// CGKOOBKMDJJ$$.ctor @ RVA 0x3292768

void CGKOOBKMDJJ___ctor(CGKOOBKMDJJ_o *__this,int64_t ANGBPBINHBL,System_String_o *BKJJFPJOCGP,
                       MethodInfo *method)

{
  System_String_o **ppSVar1;
  
                    /* try { // try from 03392770 to 03492773 has its CatchHandler @ 0339277c */
                    /* try { // try from 03392774 to 03492797 has its CatchHandler @ 03392638 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392730 with catch @ 03392778
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392770 with catch @ 0339277c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392714 with catch @ 03392780
                        */
  OHPOFOPJIMB___ctor((OHPOFOPJIMB_o *)__this,0,0,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).HONOOAELMFJ;
  *ppSVar1 = BKJJFPJOCGP;
                    /* try { // try from 03392798 to 0349279b has its CatchHandler @ 033927c4 */
  thunk_FUN_01c20e04(ppSVar1,BKJJFPJOCGP);
                    /* try { // try from 0339279c to 034927cb has its CatchHandler @ 03392638 */
  (__this->fields).HIIKOFEFMPG = ANGBPBINHBL;
  return;
}

