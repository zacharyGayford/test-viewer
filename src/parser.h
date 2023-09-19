#include <libxml++/libxml++.h>

class ParserXML : public xmlpp::SaxParser {
	
	public:
		ParserXML ();
		~ParserXML ();

	protected:
		void on_start_document () override;
		void on_end_document () override;
		void on_start_element (const xmlpp::ustring& name, const AttributeList& properties) override;
		void on_end_element (const xmlpp::ustring& name) override;
		void on_characters (const xmlpp::ustring& name) override;
		void on_comment (const xmlpp::ustring& text) override;
		void on_warning (const xmlpp::ustring& test) override;
		void on_error (const xmlpp::ustring& text) override;
		void on_fatal_error (const xmlpp::ustring& text) override;

};
