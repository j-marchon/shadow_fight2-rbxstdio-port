// GIAMPEGMNHE$$BNNEHBHNIKG @ RVA 0x330D1B4

System_Nullable_DateTime__o
GIAMPEGMNHE__BNNEHBHNIKG
          (System_Xml_XmlAttribute_o *LBJNDMNEJJB,System_String_o *HBCGFJEOADH,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_DateTime_Fields SVar4;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo_27F61A0 *in_x3;
  System_Nullable_DateTime__o __this;
  System_Nullable_DateTime__o SVar5;
  undefined8 local_40;
  System_DateTime_Fields SStack_38;
  
                    /* catch() { ... } // from try @ 0340cf98 with catch @ 0340d1b4 */
                    /* catch() { ... } // from try @ 0340ce10 with catch @ 0340d1b8 */
                    /* catch() { ... } // from try @ 0340cdf4 with catch @ 0340d1bc */
                    /* catch() { ... } // from try @ 0340ce98 with catch @ 0340d1c0 */
                    /* catch() { ... } // from try @ 0340ce04 with catch @ 0340d1c4 */
                    /* catch() { ... } // from try @ 0340cea4 with catch @ 0340d1c8 */
                    /* catch() { ... } // from try @ 0340d134 with catch @ 0340d1cc */
                    /* catch() { ... } // from try @ 0340d130 with catch @ 0340d1d0 */
                    /* catch() { ... } // from try @ 0340cebc with catch @ 0340d1d4 */
  if ((DAT_04567794 & 1) == 0) {
                    /* catch() { ... } // from try @ 0340ce80 with catch @ 0340d1d8 */
                    /* catch() { ... } // from try @ 0340cec4 with catch @ 0340d1dc */
                    /* catch() { ... } // from try @ 0340ce20 with catch @ 0340d1e0 */
    FUN_01bab630(&System_Globalization_CultureInfo_TypeInfo);
                    /* catch() { ... } // from try @ 0340ce28 with catch @ 0340d1e4 */
                    /* catch() { ... } // from try @ 0340cd0c with catch @ 0340d1e8 */
                    /* catch() { ... } // from try @ 0340cca8 with catch @ 0340d1ec */
    FUN_01bab630(&System_DateTime_TypeInfo);
                    /* catch() { ... } // from try @ 0340d12c with catch @ 0340d1f0 */
                    /* catch() { ... } // from try @ 0340d128 with catch @ 0340d1f4 */
                    /* catch() { ... } // from try @ 0340ccc0 with catch @ 0340d1f8 */
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
                    /* catch() { ... } // from try @ 0340cdcc with catch @ 0340d1fc */
                    /* catch() { ... } // from try @ 0340cc94 with catch @ 0340d200 */
    DAT_04567794 = 1;
  }
  if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
    local_40 = 0;
    SStack_38._dateData = 0;
  }
  else {
    pSVar3 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar3,(MethodInfo *)0x0);
    local_40 = 0;
    SStack_38._dateData = 0;
    if (!bVar2) {
                    /* try { // try from 0340d238 to 0350d23b has its CatchHandler @ 0340d268 */
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(HBCGFJEOADH,(MethodInfo *)0x0);
                    /* try { // try from 0340d23c to 0350d277 has its CatchHandler @ 0340c9f0 */
      pIVar1 = (LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr;
      if (bVar2) {
        pSVar3 = (System_String_o *)(*pIVar1)(LBJNDMNEJJB);
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0340d238 with catch @ 0340d268 */
          thunk_FUN_01ba7564();
        }
        SVar4._dateData = (uint64_t)System_DateTime__Parse(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0340d278 to 0350d28b has its CatchHandler @ 0340d30c */
      }
      else {
        pSVar3 = (System_String_o *)
                 (*pIVar1)(LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
                    /* catch() { ... } // from try @ 0340cfdc with catch @ 0340d28c
                       try { // try from 0340d28c to 0350d2af has its CatchHandler @ 0340c9f0 */
                    /* catch() { ... } // from try @ 0340cf5c with catch @ 0340d290 */
                    /* catch() { ... } // from try @ 0340d05c with catch @ 0340d294 */
                    /* catch() { ... } // from try @ 0340cedc with catch @ 0340d298 */
                    /* catch() { ... } // from try @ 0340ce54 with catch @ 0340d29c */
        if ((System_Globalization_CultureInfo_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0340cde0 with catch @ 0340d2a0 */
          thunk_FUN_01ba7564();
        }
        provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
                    /* try { // try from 0340d2b0 to 0350d2b3 has its CatchHandler @ 0340d2e0 */
                    /* try { // try from 0340d2b4 to 0350d2ef has its CatchHandler @ 0340c9f0 */
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        in_x3 = (MethodInfo_27F61A0 *)0x40;
        SVar4._dateData =
             (uint64_t)
             System_DateTime__ParseExact
                       (pSVar3,HBCGFJEOADH,(System_IFormatProvider_o *)provider,0x40,
                        (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340d2b0 with catch @ 0340d2e0 */
      }
      local_40 = 0;
      SStack_38._dateData = 0;
      __this.fields.value.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)SVar4._dateData;
      __this.fields._0_8_ = &local_40;
                    /* try { // try from 0340d2f0 to 0350d2f7 has its CatchHandler @ 0340d30c */
                    /* try { // try from 0340d2f8 to 0350d303 has its CatchHandler @ 0340c9f0 */
      System_Nullable<DateTime>___ctor
                (__this,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData,in_x3)
      ;
    }
  }
  SVar5.fields.value.fields._dateData =
       (System_DateTime_Fields)(System_DateTime_Fields)SStack_38._dateData;
  SVar5.fields._0_8_ = local_40;
  return (System_Nullable_DateTime__o)SVar5.fields;
}

