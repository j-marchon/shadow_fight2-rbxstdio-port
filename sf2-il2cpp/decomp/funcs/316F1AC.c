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

