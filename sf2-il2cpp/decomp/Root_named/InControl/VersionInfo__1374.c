// TypeDefIndex 1374
// Namespace: InControl
// public struct VersionInfo : IComparable<VersionInfo>
// Fields:
//   public int Major; // 0x0
//   public int Minor; // 0x4
//   public int Patch; // 0x8
//   public int Build; // 0xC

// ===== public void .ctor(int major, int minor = 0, int patch = 0, int build = 0)  [RVA 0x316F1AC]
// InControl.VersionInfo$$.ctor @ RVA 0x316F1AC

void InControl_VersionInfo___ctor
               (InControl_VersionInfo_o __this,int32_t major,int32_t minor,int32_t patch,
               int32_t build,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = __this.fields._0_8_;
  *piVar1 = __this.fields.Patch;
  piVar1[1] = major;
  piVar1[2] = minor;
  piVar1[3] = patch;
  return;
}


// ===== public static VersionInfo InControlVersion()  [RVA 0x316F1B8]
// InControl.VersionInfo$$InControlVersion @ RVA 0x316F1B8

InControl_VersionInfo_o InControl_VersionInfo__InControlVersion(MethodInfo *method)

{
  InControl_VersionInfo_o IVar1;
  
  IVar1.fields.Patch = 4;
  IVar1.fields.Build = 0xec0;
  IVar1.fields.Major = 1;
  IVar1.fields.Minor = 4;
  return (InControl_VersionInfo_o)IVar1.fields;
}


// ===== public static VersionInfo UnityVersion()  [RVA 0x316F1CC]
// InControl.VersionInfo$$UnityVersion @ RVA 0x316F1CC

InControl_VersionInfo_o InControl_VersionInfo__UnityVersion(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Text_RegularExpressions_Match_o *pSVar4;
  System_Text_RegularExpressions_GroupCollection_o *pSVar5;
  System_Text_RegularExpressions_Group_o *pSVar6;
  InControl_VersionInfo_o IVar7;
  
  if ((DAT_0456690f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
    FUN_01bab630(&StringLiteral_15815/*"^(\d+)\.(\d+)\.(\d+)"*/);
    DAT_0456690f = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0326f23c to 0336f243 has its CatchHandler @ 0326f310 */
  pSVar3 = UnityEngine_Application__get_unityVersion((MethodInfo *)0x0);
                    /* try { // try from 0326f250 to 0336f25f has its CatchHandler @ 0326f314 */
  if ((System_Text_RegularExpressions_Regex_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Text_RegularExpressions_Regex_TypeInfo);
  }
                    /* try { // try from 0326f264 to 0336f273 has its CatchHandler @ 0326f2fc */
  pSVar4 = System_Text_RegularExpressions_Regex__Match(pSVar3,StringLiteral_15815/*"^(\d+)\.(\d+)\.(\d+)"*/,(MethodInfo *)0x0)
  ;
  if (pSVar4 != (System_Text_RegularExpressions_Match_o *)0x0) {
                    /* try { // try from 0326f274 to 0336f27b has its CatchHandler @ 0326f300 */
    pSVar5 = (System_Text_RegularExpressions_GroupCollection_o *)
             (*(pSVar4->klass->vtable)._5_get_Groups.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._5_get_Groups.method);
                    /* try { // try from 0326f284 to 0336f29b has its CatchHandler @ 0326f318 */
    if ((pSVar5 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
       (pSVar6 = System_Text_RegularExpressions_GroupCollection__get_Item
                           (pSVar5,1,(MethodInfo *)0x0),
       pSVar6 != (System_Text_RegularExpressions_Group_o *)0x0)) {
                    /* try { // try from 0326f2a4 to 0336f2bf has its CatchHandler @ 0326f30c */
      pSVar3 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)pSVar6,(MethodInfo *)0x0);
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Convert_TypeInfo);
      }
                    /* try { // try from 0326f2c0 to 0336f2ef has its CatchHandler @ 0326f12c */
      IVar7.fields.Major = System_Convert__ToInt32(pSVar3,(MethodInfo *)0x0);
      pSVar5 = (System_Text_RegularExpressions_GroupCollection_o *)
               (*(pSVar4->klass->vtable)._5_get_Groups.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._5_get_Groups.method);
                    /* try { // try from 0326f2f0 to 0336f2f3 has its CatchHandler @ 0326f308 */
      if ((pSVar5 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
         (pSVar6 = System_Text_RegularExpressions_GroupCollection__get_Item
                             (pSVar5,2,(MethodInfo *)0x0),
         pSVar6 != (System_Text_RegularExpressions_Group_o *)0x0)) {
                    /* try { // try from 0326f2f4 to 0336f2f7 has its CatchHandler @ 0326f304 */
                    /* try { // try from 0326f2f8 to 0336f32f has its CatchHandler @ 0326f12c */
        pSVar3 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)pSVar6,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f264 with catch @ 0326f2fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f274 with catch @ 0326f300
                        */
        iVar1 = System_Convert__ToInt32(pSVar3,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f2f4 with catch @ 0326f304
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f2f0 with catch @ 0326f308
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f2a4 with catch @ 0326f30c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f23c with catch @ 0326f310
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f250 with catch @ 0326f314
                        */
        pSVar5 = (System_Text_RegularExpressions_GroupCollection_o *)
                 (*(pSVar4->klass->vtable)._5_get_Groups.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._5_get_Groups.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f284 with catch @ 0326f318
                        */
        if ((pSVar5 != (System_Text_RegularExpressions_GroupCollection_o *)0x0) &&
           (pSVar6 = System_Text_RegularExpressions_GroupCollection__get_Item
                               (pSVar5,3,(MethodInfo *)0x0),
           pSVar6 != (System_Text_RegularExpressions_Group_o *)0x0)) {
                    /* try { // try from 0326f330 to 0336f333 has its CatchHandler @ 0326f354 */
          pSVar3 = System_Text_RegularExpressions_Capture__get_Value
                             ((System_Text_RegularExpressions_Capture_o *)pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 0326f334 to 0336f35b has its CatchHandler @ 0326f12c */
          iVar2 = System_Convert__ToInt32(pSVar3,(MethodInfo *)0x0);
          IVar7.fields.Minor = iVar1;
          IVar7.fields.Patch = iVar2;
          IVar7.fields.Build = 0;
          return (InControl_VersionInfo_o)IVar7.fields;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0326f330 with catch @ 0326f354 */
  FUN_01bab8c8();
}


// ===== public int CompareTo(VersionInfo other)  [RVA 0x316F358]
// InControl.VersionInfo$$CompareTo @ RVA 0x316F358

int32_t InControl_VersionInfo__CompareTo
                  (InControl_VersionInfo_o __this,InControl_VersionInfo_o other,MethodInfo *method)

{
  int *piVar1;
  
  piVar1 = __this.fields._0_8_;
                    /* try { // try from 0326f35c to 0336f363 has its CatchHandler @ 0326f378 */
  if (__this.fields.Patch <= *piVar1) {
                    /* try { // try from 0326f364 to 0336f36f has its CatchHandler @ 0326f12c */
    if (__this.fields.Patch < *piVar1) {
      return 1;
    }
                    /* try { // try from 0326f370 to 0336f377 has its CatchHandler @ 0326f378 */
    if (__this.fields.Build <= piVar1[1]) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326f35c with catch @ 0326f378
                       catch(type#2 @ 00000000) { ... } // from try @ 0326f370 with catch @ 0326f378
                        */
      if (__this.fields.Build < piVar1[1]) {
        return 1;
      }
      if (other.fields.Major <= piVar1[2]) {
        if (other.fields.Major < piVar1[2]) {
          return 1;
        }
        if (other.fields.Minor <= piVar1[3]) {
          return (int32_t)(other.fields.Minor < piVar1[3]);
        }
      }
    }
  }
  return -1;
}


// ===== public static bool op_Equality(VersionInfo a, VersionInfo b)  [RVA 0x316F3B4]
// InControl.VersionInfo$$op_Equality @ RVA 0x316F3B4

bool InControl_VersionInfo__op_Equality
               (InControl_VersionInfo_o a,InControl_VersionInfo_o b,MethodInfo *method)

{
  int32_t iVar1;
  InControl_VersionInfo_o __this;
  InControl_VersionInfo_o other;
  undefined8 local_20;
  undefined8 local_18;
  
  other.fields._8_8_ = b.fields._8_8_;
  local_18 = a.fields._8_8_;
  local_20 = a.fields._0_8_;
  __this.fields.Patch = (int)b.fields._0_8_;
  __this.fields.Build = (int)((ulong)b.fields._0_8_ >> 0x20);
  __this.fields._0_8_ = &local_20;
  other.fields.Major = (int)other.fields._8_8_;
  other.fields.Minor = (int)((ulong)other.fields._8_8_ >> 0x20);
  iVar1 = InControl_VersionInfo__CompareTo(__this,other,method);
  return iVar1 == 0;
}


// ===== public static bool op_Inequality(VersionInfo a, VersionInfo b)  [RVA 0x316F3E4]
// InControl.VersionInfo$$op_Inequality @ RVA 0x316F3E4

bool InControl_VersionInfo__op_Inequality
               (InControl_VersionInfo_o a,InControl_VersionInfo_o b,MethodInfo *method)

{
  int32_t iVar1;
  InControl_VersionInfo_o __this;
  InControl_VersionInfo_o other;
  undefined8 local_20;
  undefined8 local_18;
  
  other.fields._8_8_ = b.fields._8_8_;
  local_18 = a.fields._8_8_;
  local_20 = a.fields._0_8_;
  __this.fields.Patch = (int)b.fields._0_8_;
  __this.fields.Build = (int)((ulong)b.fields._0_8_ >> 0x20);
  __this.fields._0_8_ = &local_20;
  other.fields.Major = (int)other.fields._8_8_;
  other.fields.Minor = (int)((ulong)other.fields._8_8_ >> 0x20);
  iVar1 = InControl_VersionInfo__CompareTo(__this,other,method);
  return iVar1 != 0;
}


// ===== public static bool op_LessThanOrEqual(VersionInfo a, VersionInfo b)  [RVA 0x316F414]
// InControl.VersionInfo$$op_LessThanOrEqual @ RVA 0x316F414

bool InControl_VersionInfo__op_LessThanOrEqual
               (InControl_VersionInfo_o a,InControl_VersionInfo_o b,MethodInfo *method)

{
  int32_t iVar1;
  InControl_VersionInfo_o __this;
  InControl_VersionInfo_o other;
  undefined8 local_20;
  undefined8 local_18;
  
  other.fields._8_8_ = b.fields._8_8_;
  local_18 = a.fields._8_8_;
  local_20 = a.fields._0_8_;
  __this.fields.Patch = (int)b.fields._0_8_;
  __this.fields.Build = (int)((ulong)b.fields._0_8_ >> 0x20);
  __this.fields._0_8_ = &local_20;
  other.fields.Major = (int)other.fields._8_8_;
  other.fields.Minor = (int)((ulong)other.fields._8_8_ >> 0x20);
  iVar1 = InControl_VersionInfo__CompareTo(__this,other,method);
  return iVar1 < 1;
}


// ===== public static bool op_GreaterThanOrEqual(VersionInfo a, VersionInfo b)  [RVA 0x316F444]
// InControl.VersionInfo$$op_GreaterThanOrEqual @ RVA 0x316F444

bool InControl_VersionInfo__op_GreaterThanOrEqual
               (InControl_VersionInfo_o a,InControl_VersionInfo_o b,MethodInfo *method)

{
  int32_t iVar1;
  InControl_VersionInfo_o __this;
  InControl_VersionInfo_o other;
  undefined8 local_20;
  undefined8 local_18;
  
  other.fields._8_8_ = b.fields._8_8_;
  local_18 = a.fields._8_8_;
  local_20 = a.fields._0_8_;
  __this.fields.Patch = (int)b.fields._0_8_;
  __this.fields.Build = (int)((ulong)b.fields._0_8_ >> 0x20);
  __this.fields._0_8_ = &local_20;
  other.fields.Major = (int)other.fields._8_8_;
  other.fields.Minor = (int)((ulong)other.fields._8_8_ >> 0x20);
  iVar1 = InControl_VersionInfo__CompareTo(__this,other,method);
  return (bool)((byte)~(byte)((uint)iVar1 >> 0x18) >> 7);
}


// ===== public static bool op_LessThan(VersionInfo a, VersionInfo b)  [RVA 0x316F474]
// InControl.VersionInfo$$op_LessThan @ RVA 0x316F474

bool InControl_VersionInfo__op_LessThan
               (InControl_VersionInfo_o a,InControl_VersionInfo_o b,MethodInfo *method)

{
  int32_t iVar1;
  InControl_VersionInfo_o __this;
  InControl_VersionInfo_o other;
  undefined8 local_20;
  undefined8 local_18;
  
  other.fields._8_8_ = b.fields._8_8_;
  local_18 = a.fields._8_8_;
  local_20 = a.fields._0_8_;
  __this.fields.Patch = (int)b.fields._0_8_;
  __this.fields.Build = (int)((ulong)b.fields._0_8_ >> 0x20);
  __this.fields._0_8_ = &local_20;
  other.fields.Major = (int)other.fields._8_8_;
  other.fields.Minor = (int)((ulong)other.fields._8_8_ >> 0x20);
  iVar1 = InControl_VersionInfo__CompareTo(__this,other,method);
  return SUB41((uint)iVar1 >> 0x1f,0);
}


// ===== public static bool op_GreaterThan(VersionInfo a, VersionInfo b)  [RVA 0x316F4A0]
// InControl.VersionInfo$$op_GreaterThan @ RVA 0x316F4A0

bool InControl_VersionInfo__op_GreaterThan
               (InControl_VersionInfo_o a,InControl_VersionInfo_o b,MethodInfo *method)

{
  int32_t iVar1;
  InControl_VersionInfo_o __this;
  InControl_VersionInfo_o other;
  undefined8 local_20;
  undefined8 local_18;
  
  other.fields._8_8_ = b.fields._8_8_;
  local_18 = a.fields._8_8_;
  local_20 = a.fields._0_8_;
  __this.fields.Patch = (int)b.fields._0_8_;
  __this.fields.Build = (int)((ulong)b.fields._0_8_ >> 0x20);
  __this.fields._0_8_ = &local_20;
  other.fields.Major = (int)other.fields._8_8_;
  other.fields.Minor = (int)((ulong)other.fields._8_8_ >> 0x20);
  iVar1 = InControl_VersionInfo__CompareTo(__this,other,method);
  return 0 < iVar1;
}


// ===== public override string ToString()  [RVA 0x316F4D0]
// InControl.VersionInfo$$ToString @ RVA 0x316F4D0

System_String_o * InControl_VersionInfo__ToString(InControl_VersionInfo_o __this,MethodInfo *method)

{
  undefined4 *puVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  System_String_o *pSVar4;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = __this.fields._0_8_;
  if ((DAT_04566910 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo,__this.fields._8_8_);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_22355/*"{0}.{1}.{2}"*/);
    FUN_01bab630(&StringLiteral_22356/*"{0}.{1}.{2} build {3}"*/);
    DAT_04566910 = 1;
  }
  if (puVar1[3] == 0) {
    local_24 = *puVar1;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    local_28 = puVar1[1];
                    /* try { // try from 0326f6c0 to 0336f743 has its CatchHandler @ 0326f584 */
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
    local_34 = puVar1[2];
    arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    pSVar4 = System_String__Format(StringLiteral_22355/*"{0}.{1}.{2}"*/,pIVar2,arg1,arg2,(MethodInfo *)0x0);
    return pSVar4;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  local_24 = *puVar1;
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_0326f71c:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
                    /* try { // try from 0326f584 to 0336f63b has its CatchHandler @ 0326f584
                       catch() { ... } // from try @ 0326f584 with catch @ 0326f584
                       catch() { ... } // from try @ 0326f6c0 with catch @ 0326f584
                       catch() { ... } // from try @ 0326f748 with catch @ 0326f584
                       catch() { ... } // from try @ 0326f750 with catch @ 0326f584
                       catch() { ... } // from try @ 0326f7f4 with catch @ 0326f584 */
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04(args->m_Items,pIVar2);
    local_28 = puVar1[1];
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_0326f71c;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      local_34 = puVar1[2];
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_0326f71c;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
        local_38 = puVar1[3];
                    /* try { // try from 0326f63c to 0336f663 has its CatchHandler @ 0326f764 */
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_0326f71c;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          pSVar4 = System_String__Format(StringLiteral_22356/*"{0}.{1}.{2} build {3}"*/,args,(MethodInfo *)0x0);
          return pSVar4;
                    /* try { // try from 0326f698 to 0336f6bf has its CatchHandler @ 0326f760 */
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public string ToShortString()  [RVA 0x316F72C]
// InControl.VersionInfo$$ToShortString @ RVA 0x316F72C

System_String_o *
InControl_VersionInfo__ToShortString(InControl_VersionInfo_o __this,MethodInfo *method)

{
  undefined4 *puVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  System_String_o *pSVar4;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = __this.fields._0_8_;
                    /* try { // try from 0326f744 to 0336f747 has its CatchHandler @ 0326f75c */
                    /* try { // try from 0326f748 to 0336f74b has its CatchHandler @ 0326f584 */
  if ((DAT_04566911 & 1) == 0) {
                    /* try { // try from 0326f74c to 0336f74f has its CatchHandler @ 0326f758 */
                    /* try { // try from 0326f750 to 0336f77b has its CatchHandler @ 0326f584 */
    FUN_01bab630(&int_TypeInfo,__this.fields._8_8_);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f74c with catch @ 0326f758
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f744 with catch @ 0326f75c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f698 with catch @ 0326f760
                        */
    FUN_01bab630(&object___TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326f63c with catch @ 0326f764
                        */
    FUN_01bab630(&StringLiteral_22355/*"{0}.{1}.{2}"*/);
    FUN_01bab630(&StringLiteral_22358/*"{0}.{1}.{2}b{3}"*/);
                    /* try { // try from 0326f77c to 0336f77f has its CatchHandler @ 0326f78c */
    DAT_04566911 = 1;
  }
                    /* catch() { ... } // from try @ 0326f77c with catch @ 0326f78c */
  if (puVar1[3] == 0) {
    local_24 = *puVar1;
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    local_28 = puVar1[1];
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
    local_34 = puVar1[2];
    arg2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    pSVar4 = System_String__Format(StringLiteral_22355/*"{0}.{1}.{2}"*/,pIVar2,arg1,arg2,(MethodInfo *)0x0);
    return pSVar4;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  local_24 = *puVar1;
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0326f7cc to 0336f7f3 has its CatchHandler @ 0326f808 */
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_0326f978:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
                    /* try { // try from 0326f7f4 to 0336f7ff has its CatchHandler @ 0326f584 */
    thunk_FUN_01c20e04(args->m_Items,pIVar2);
    local_28 = puVar1[1];
                    /* try { // try from 0326f800 to 0336f807 has its CatchHandler @ 0326f808 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326f7cc with catch @ 0326f808
                       catch(type#2 @ 00000000) { ... } // from try @ 0326f800 with catch @ 0326f808
                        */
    pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_28);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
    goto LAB_0326f978;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      local_34 = puVar1[2];
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_0326f978;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
        local_38 = puVar1[3];
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_38);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_0326f978;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          pSVar4 = System_String__Format(StringLiteral_22358/*"{0}.{1}.{2}b{3}"*/,args,(MethodInfo *)0x0);
          return pSVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public override bool Equals(object other)  [RVA 0x316F988]
// InControl.VersionInfo$$Equals @ RVA 0x316F988

bool InControl_VersionInfo__Equals
               (InControl_VersionInfo_o __this,Il2CppObject *other,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int32_t iVar4;
  undefined8 *puVar5;
  MethodInfo *in_x4;
  InControl_VersionInfo_o __this_00;
  InControl_VersionInfo_o other_00;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar5 = __this.fields._8_8_;
  if ((DAT_04566912 & 1) == 0) {
    FUN_01bab630(&InControl_VersionInfo_TypeInfo);
    DAT_04566912 = 1;
  }
  if ((puVar5 == (undefined8 *)0x0) ||
     ((InControl_VersionInfo_c *)*puVar5 != InControl_VersionInfo_TypeInfo)) {
    bVar3 = false;
  }
  else {
    uVar1 = *__this.fields._0_8_;
    uVar2 = __this.fields._0_8_[1];
    puVar5 = (undefined8 *)thunk_FUN_01bda96c(puVar5);
    __this_00.fields._8_8_ = *puVar5;
    __this_00.fields._0_8_ = &local_30;
    other_00.fields._8_8_ = method;
    other_00.fields._0_8_ = puVar5[1];
    local_30 = uVar1;
    uStack_28 = uVar2;
    iVar4 = InControl_VersionInfo__CompareTo(__this_00,other_00,in_x4);
    bVar3 = iVar4 == 0;
  }
  return bVar3;
}


// ===== public override int GetHashCode()  [RVA 0x316FA14]
// InControl.VersionInfo$$GetHashCode @ RVA 0x316FA14

int32_t InControl_VersionInfo__GetHashCode(InControl_VersionInfo_o __this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int32_t __this_00;
  
  __this_00 = __this.fields.Major;
  uVar1 = System_Int32__GetHashCode(__this_00,(MethodInfo *)0x0);
  uVar2 = System_Int32__GetHashCode(__this_00 + 4,(MethodInfo *)0x0);
  uVar3 = System_Int32__GetHashCode(__this_00 + 8,(MethodInfo *)0x0);
  uVar4 = System_Int32__GetHashCode(__this_00 + 0xc,(MethodInfo *)0x0);
  return uVar2 ^ uVar1 ^ uVar3 ^ uVar4;
}

