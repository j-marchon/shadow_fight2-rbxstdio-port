// Nekki.Utils.RaidBetaLogger$$FAENACIILOH @ RVA 0x359D4B4

void Nekki_Utils_RaidBetaLogger__FAENACIILOH
               (Nekki_Utils_RaidBetaLogger_o *__this,System_String_o *NIPCCKMNCGF,
               System_String_o *GNLGLGHFLDD,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  System_String_o *arg1;
  System_String_o *pSVar6;
  System_Text_StringBuilder_o *pSVar7;
  float __this_00;
  System_Enum_o local_88;
  int32_t local_78;
  float local_6c;
  int32_t local_68;
  bool local_64 [4];
  
  if ((DAT_04568ddb & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1266);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1267);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1268);
                    /* try { // try from 0369d510 to 0379d517 has its CatchHandler @ 0369d580 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1269);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1270);
                    /* try { // try from 0369d528 to 0379d533 has its CatchHandler @ 0369d578 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1271);
                    /* try { // try from 0369d534 to 0379d56f has its CatchHandler @ 0369d478 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1272);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1273);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1274);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1275);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0369d570 to 0379d573 has its CatchHandler @ 0369d57c */
                    /* try { // try from 0369d574 to 0379d597 has its CatchHandler @ 0369d478 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369d528 with catch @ 0369d578
                        */
    FUN_01bab630(&UnityEngine_LogType_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369d570 with catch @ 0369d57c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369d510 with catch @ 0369d580
                        */
    DAT_04568ddb = 1;
  }
                    /* try { // try from 0369d598 to 0379d59b has its CatchHandler @ 0369d5c8 */
                    /* try { // try from 0369d59c to 0379d5cf has its CatchHandler @ 0369d478 */
  local_6c = 0.0;
  local_68 = 0;
  local_64[0] = false;
                    /* catch() { ... } // from try @ 0369d598 with catch @ 0369d5c8 */
                    /* try { // try from 0369d5d0 to 0379d5d7 has its CatchHandler @ 0369d5ec */
                    /* try { // try from 0369d5d8 to 0379d5e3 has its CatchHandler @ 0369d478 */
                    /* try { // try from 0369d5e4 to 0379d5eb has its CatchHandler @ 0369d5ec */
  switch(ACCIHBHMFPN) {
  case 0:
  case 1:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369d5d0 with catch @ 0369d5ec
                       catch(type#2 @ 00000000) { ... } // from try @ 0369d5e4 with catch @ 0369d5ec
                        */
    (__this->fields).LCJAAPPDFJJ = (__this->fields).LCJAAPPDFJJ + 1;
    break;
  case 2:
    (__this->fields).GGKJOBOBOKM = (__this->fields).GGKJOBOBOKM + 1;
    break;
  case 3:
    (__this->fields).PPPPKKKOMLO = (__this->fields).PPPPKKKOMLO + 1;
    break;
  case 4:
    Nekki_Utils_RaidBetaLogger__FMHCAONPDDN(__this,NIPCCKMNCGF,GNLGLGHFLDD,local_64,method);
    bVar1 = local_64[0] == false;
    goto LAB_0369d61c;
  }
  bVar1 = true;
LAB_0369d61c:
  pSVar7 = (__this->fields).LJLADKMLDEF;
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1266,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1267,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  local_68 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1268,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1269,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  pSVar5 = System_Int32__ToString((int32_t)&local_68,pSVar5,(MethodInfo *)0x0);
  local_6c = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1270,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1271,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  arg1 = System_Single__ToString(__this_00,(System_String_o *)&local_6c,method_00);
  if (bVar1) {
    local_88.klass = (System_Enum_c *)UnityEngine_LogType_TypeInfo;
    local_88.monitor = (void *)0xffffffffffffffff;
    local_78 = ACCIHBHMFPN;
    pSVar6 = System_Enum__ToString(&local_88,(MethodInfo *)0x0);
    if (pSVar6 == (System_String_o *)0x0) goto LAB_0369d8e8;
    pSVar6 = System_String__ToUpper(pSVar6,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1272,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1273,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  }
  if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__AppendFormat
              (pSVar7,pSVar4,(Il2CppObject *)pSVar5,(Il2CppObject *)arg1,(Il2CppObject *)pSVar6,
               (MethodInfo *)0x0);
    pSVar7 = (__this->fields).LJLADKMLDEF;
    if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append(pSVar7,NIPCCKMNCGF,(MethodInfo *)0x0);
      if (ACCIHBHMFPN != 4) {
        return;
      }
      if (GNLGLGHFLDD != (System_String_o *)0x0) {
        if ((GNLGLGHFLDD->fields)._stringLength < 0x29) {
          return;
        }
        pSVar7 = (__this->fields).LJLADKMLDEF;
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar2,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1274,
                   (MethodInfo *)0x0);
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1275,
                   (MethodInfo *)0x0);
        pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
        if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append(pSVar7,pSVar4,(MethodInfo *)0x0);
          pSVar7 = (__this->fields).LJLADKMLDEF;
          if (pSVar7 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append(pSVar7,GNLGLGHFLDD,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0369d8e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

