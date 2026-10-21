// TypeDefIndex 341
// Namespace: 
// public class PFOMHOLCODE.JLFFOOCNIIO
// Fields:
//   public int IGLHCNLNIPK; // 0x10
//   public LCKCDEKNLOA NEIJJHEFLHP; // 0x18

// ===== public void .ctor()  [RVA 0x335225C]
// PFOMHOLCODE.JLFFOOCNIIO$$.ctor @ RVA 0x335225C

void PFOMHOLCODE_JLFFOOCNIIO___ctor(PFOMHOLCODE_JLFFOOCNIIO_o *__this,MethodInfo *method)

{
  LCKCDEKNLOA_o *__this_00;
  LCKCDEKNLOA_o **ppLVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a28 & 1) == 0) {
    FUN_01bab630(&LCKCDEKNLOA_TypeInfo);
    DAT_04567a28 = 1;
    method = extraout_x1;
  }
  __this_00 = (LCKCDEKNLOA_o *)thunk_FUN_01bda818(LCKCDEKNLOA_TypeInfo,method);
  LCKCDEKNLOA___ctor(__this_00,(MethodInfo *)0x0);
  ppLVar1 = &(__this->fields).NEIJJHEFLHP;
  *ppLVar1 = __this_00;
  thunk_FUN_01c20e04(ppLVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

