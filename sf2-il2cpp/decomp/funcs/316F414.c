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

