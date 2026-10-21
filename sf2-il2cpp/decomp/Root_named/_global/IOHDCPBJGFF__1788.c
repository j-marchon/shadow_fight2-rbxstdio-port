// TypeDefIndex 1788
// Namespace: 
// public class IOHDCPBJGFF : ODKDFMHHLIP
// Fields:
//   public string DONLEDMPGCF; // 0x38

// ===== public void .ctor()  [RVA 0x320972C]
// IOHDCPBJGFF$$.ctor @ RVA 0x320972C

void IOHDCPBJGFF___ctor(IOHDCPBJGFF_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04566e64 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12583/*"SysTxt"*/);
    DAT_04566e64 = 1;
  }
  ODKDFMHHLIP___ctor((ODKDFMHHLIP_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).DONLEDMPGCF;
  *ppSVar1 = StringLiteral_12583/*"SysTxt"*/;
  thunk_FUN_01c20e04(ppSVar1);
  (__this->fields).super.DNPAFIFHKIP = 0;
  return;
}


// ===== public void .ctor(OLCBPIHLPEC OMPNCGNDGMI)  [RVA 0x320978C]
// IOHDCPBJGFF$$.ctor @ RVA 0x320978C

void IOHDCPBJGFF___ctor(IOHDCPBJGFF_o *__this,OLCBPIHLPEC_o *OMPNCGNDGMI,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  
  IOHDCPBJGFF___ctor(__this,(MethodInfo *)OMPNCGNDGMI);
  if (OMPNCGNDGMI != (OLCBPIHLPEC_o *)0x0) {
    (__this->fields).super.ABCHAOKFLGL = (OMPNCGNDGMI->fields).EGELDFKMOCJ;
    thunk_FUN_01c20e04();
    pPVar1 = (OMPNCGNDGMI->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this->fields).super.HCNDEELOKHA = (pPVar1->fields).GDKPGIBMFPA;
    (__this->fields).super.MOIGDPBNMNI = (OMPNCGNDGMI->fields).EMDNDLOODLG;
  }
  return;
}

