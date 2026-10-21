// HPEENDCCJND$$BCEJCCGFMOP @ RVA 0x3157C28

bool HPEENDCCJND__BCEJCCGFMOP
               (HPEENDCCJND_o *__this,System_String_o *ABDAOEKFPNA,System_String_o *ECHODGPFKED,
               MethodInfo *method)

{
  bool bVar1;
  double dVar2;
  double local_38;
  double local_30;
  int64_t local_28;
  int64_t local_18;
  
  local_18 = 0;
                    /* try { // try from 03257c38 to 03357c3f has its CatchHandler @ 0325801c */
  local_30 = 0.0;
  local_28 = 0;
  local_38 = 0.0;
                    /* try { // try from 03257c50 to 03357c57 has its CatchHandler @ 03258034 */
  bVar1 = System_String__op_Equality(ABDAOEKFPNA,ECHODGPFKED,(MethodInfo *)0x0);
                    /* try { // try from 03257c6c to 03357c7f has its CatchHandler @ 03258018 */
                    /* try { // try from 03257c90 to 03357c97 has its CatchHandler @ 0325802c */
  if ((bVar1) ||
     (((bVar1 = System_Int64__TryParse(ABDAOEKFPNA,&local_18,(MethodInfo *)0x0), bVar1 &&
       (bVar1 = System_Int64__TryParse(ECHODGPFKED,&local_28,(MethodInfo *)0x0), bVar1)) &&
      (local_18 == local_28)))) {
                    /* try { // try from 03257c58 to 03357c63 has its CatchHandler @ 03258038 */
    bVar1 = true;
  }
  else {
                    /* try { // try from 03257ca0 to 03357ca7 has its CatchHandler @ 03258040 */
    bVar1 = System_Double__TryParse(ABDAOEKFPNA,&local_30,(MethodInfo *)0x0);
                    /* try { // try from 03257ca8 to 03357cb3 has its CatchHandler @ 03258064 */
    if ((bVar1) && (bVar1 = System_Double__TryParse(ECHODGPFKED,&local_38,(MethodInfo *)0x0), bVar1)
       ) {
                    /* try { // try from 03257cc4 to 03357ccb has its CatchHandler @ 03258044 */
      local_30 = local_30 - local_38;
                    /* try { // try from 03257cd4 to 03357cdb has its CatchHandler @ 03258060 */
      dVar2 = -local_30;
      if (0.0 <= local_30) {
        dVar2 = local_30;
      }
                    /* try { // try from 03257cdc to 03357ce7 has its CatchHandler @ 03258030 */
      bVar1 = dVar2 < 0.001;
    }
    else {
      bVar1 = false;
    }
  }
                    /* try { // try from 03257cf0 to 03357d03 has its CatchHandler @ 03258054 */
  return bVar1;
}

