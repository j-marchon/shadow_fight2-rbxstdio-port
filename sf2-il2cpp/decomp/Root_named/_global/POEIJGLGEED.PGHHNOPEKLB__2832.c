// TypeDefIndex 2832
// Namespace: 
// public class SecurityManager.PGHHNOPEKLB
// Fields:
//   private SecurityManager.PGHHNOPEKLB.EPDFBDBHENI PKPHIABHKFE; // 0x10

// ===== public void .ctor()  [RVA 0x342C0BC]
// SecurityManager.PGHHNOPEKLB$$.ctor @ RVA 0x342C0BC

void SecurityManager_PGHHNOPEKLB___ctor(SecurityManager_PGHHNOPEKLB_o *__this,MethodInfo *method)

{
  SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568140 & 1) == 0) {
    FUN_01bab630(&SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_TypeInfo);
    DAT_04568140 = 1;
    method = extraout_x1;
  }
  __this_00 = (SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *)
              thunk_FUN_01bda818(SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_TypeInfo,method);
  (__this_00->fields).GDIJGCGHKIB = true;
                    /* try { // try from 0352c108 to 0362c10f has its CatchHandler @ 0352c198 */
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this->fields).PKPHIABHKFE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
                    /* try { // try from 0352c124 to 0362c137 has its CatchHandler @ 0352c19c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public SecurityManager.PGHHNOPEKLB.EPDFBDBHENI LCOCCHEOMKG()  [RVA 0x342C140]
// SecurityManager.PGHHNOPEKLB$$LCOCCHEOMKG @ RVA 0x342C140

SecurityManager_PGHHNOPEKLB_EPDFBDBHENI_o *
SecurityManager_PGHHNOPEKLB__LCOCCHEOMKG(SecurityManager_PGHHNOPEKLB_o *__this,MethodInfo *method)

{
  return (__this->fields).PKPHIABHKFE;
}

