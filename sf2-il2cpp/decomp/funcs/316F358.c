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

