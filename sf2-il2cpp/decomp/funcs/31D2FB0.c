// AOPBMPIONHI$$PPBANLLIGDK @ RVA 0x31D2FB0

bool AOPBMPIONHI__PPBANLLIGDK
               (AOPBMPIONHI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  
                    /* try { // try from 032d2fb0 to 033d2fd3 has its CatchHandler @ 032d4158 */
  if ((NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) &&
     (pHVar2 = (NKCMBEFHFII->fields).PCBECBEFJOI, pHVar2 != (HOOAAGABMBL_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((pHVar2->fields)._GMPAEDFIIHF_k__BackingField,(__this->fields).AKJFBKIHLFO,
                       (MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

